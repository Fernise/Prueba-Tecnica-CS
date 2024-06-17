#include "../../include/client_repository/client_repository.h"

void ClientRepository::Create(const std::string& kName, const std::string& kDni) {
  try {
    Client new_client(kName, kDni);
    my_clients_.emplace(new_client.GetId(), new_client);
  } catch (const std::exception& e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }
}

std::optional<Client> ClientRepository::Read(const int kId) const {
  try { 
    return my_clients_.at(kId);
  } catch (const std::exception& e) {
    std::cerr << "Error: " << e.what() << std::endl;
    return std::nullopt;
  }
}

void ClientRepository::Update(const int kMode, const std::tuple<std::string, std::string, int>& kClientInfo) {
  const auto [kName, kDni, kId] = kClientInfo;
  try {
    std::optional<Client> client_to_update = Read(kId);
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
  } catch (const std::out_of_range& e) {
    std::cout << "\nError: The client has not been found\n";
  }   
}

void ClientRepository::Delete(const int kId) {
  try {
    Read(kId);
    my_clients_.erase(kId);
  } catch (const std::out_of_range& e) {
    std::cout << "\nError: The Supplier has not been found\n";
  } 
}
