/**
 * @file client.cc
 * @author Fernando González Perdomo
 * @date 06-20-2024
 * @version 1.0
 * @brief Implementation of the Client class
 */

#include "../../include/client/client.h"

/**
 * @brief Client constructor
 * @param kName The client name
 * @param kDNI The client DNI
 * @note IMPORTANT: see lambda function comment below
 */
Client::Client(const std::string& kName, const std::string& kDni) : name_(kName), dni_(kDni) { 
  // This constant is used as the maximum number the random value could be minus one 
  const int kMaxValue = 100;
  // The random value could be between 0 and 99
  const int kRandomValue = std::rand() % kMaxValue;
  // Lambda function which returns an ID for the new client
  auto GenerateId = [kName, kDni, kRandomValue]() -> int {
    const int kFirstLetter = 0;
    const int kDniLetter = 8;
    return ((kRandomValue / kName[kFirstLetter]) + kDni[kDniLetter]);
  };
  SetId(GenerateId());
}

/**
 * @brief Insertion operator overload
 * @param os The std::ostream& object
 * @param kMyClient The client to be sent to the output stream
 * @return os The std::ostream& object
 */
std::ostream& operator<<(std::ostream& os, const Client& kMyClient) {
  os << "Name: " << kMyClient.name_ << "\nDni: " << kMyClient.dni_ << "\nID: " << kMyClient.id_ << "\n";

  return os;
}