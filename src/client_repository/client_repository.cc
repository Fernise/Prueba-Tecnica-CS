/**
 * @file client_repository.cc
 * @author Fernando González Perdomo
 * @date 06-20-2024
 * @version 1.0
 * @brief Implementation of the ClientRepository class
 */

#include "../../include/client_repository/client_repository.h"

/**
 * @brief Creates a new client in the repository
 * @param new_client The new client to insert in the repository
 */
void ClientRepository::Create(const Client& new_client) {
  try {
    my_clients_.emplace(new_client.GetId(), new_client);
  } catch (const std::exception& e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }
}

/**
 * @brief Reads a client found by its id
 * @param kId The client id
 * @return std::optional<T> If an id is found, return the client associated, otherwise, a null value
 */
std::optional<Client> ClientRepository::Read(const int kId) const {
  try {
    return my_clients_.at(kId);
  } catch (const std::exception& e) {
    std::cerr << "Error: " << e.what() << std::endl;
    return std::nullopt;
  }
}

/**
 * @brief Updates the client information
 * @param kMode The working mode (only update the name, cif or both)
 * @param kMyClientInfo The client information candidate to be updated
 */
void ClientRepository::Update(const int kMode, const std::tuple<std::string, std::string, int>& kClientInfo) {
  const auto [kName, kDni, kId] = kClientInfo;
  try {
    std::optional<Client> client_to_update = *Read(kId);
    switch(kMode) {
      // Mode == 1, updates name
      case 1: 
        client_to_update->SetName(kName);
        break;
      // Mode == 2, updates DNI
      case 2:
        client_to_update->SetDni(kDni);
        break;
      // Mode == 3, updates both
      case 3:
        client_to_update->SetName(kName);
        client_to_update->SetDni(kDni);
        break;
      default:
        std::cout << "\nError: The chosen mode is not valid\n";
    }
    my_clients_[client_to_update->GetId()] = *client_to_update;
  } catch (const std::out_of_range& e) {
    std::cout << "\nError: The client has not been found\n";
  }   
}

/**
 * @brief Deletes a client from the repository
 * @param kId The id of the client
 */
void ClientRepository::Delete(const int kId) {
  try {
    Read(kId);
    my_clients_.erase(kId);
  } catch (const std::out_of_range& e) {
    std::cout << "\nError: The client has not been found\n";
  } 
}

/**
 * @brief Insertion operator overload
 * @param os The std::ostream& object
 * @param kMyClientRepository The client repository object to be sent to the output stream
 * @return os The std::ostream& object
 */
std::ostream& operator<<(std::ostream& os, const ClientRepository& kMyClientRepository) {
  os << "\n";
  for (const auto& kClient : kMyClientRepository.my_clients_) {
    os << "ID: " << kClient.second.GetId() << "\n";
  }

  return os;
}