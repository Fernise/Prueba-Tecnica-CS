#include "../../include/client/client.h"

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

std::ostream& operator<<(std::ostream& os, const Client& kMyClient) {
  os << "Name: " << kMyClient.name_ << "\nDni: " << kMyClient.dni_ << "\nID: " << kMyClient.id_ << "\n";

  return os;
}