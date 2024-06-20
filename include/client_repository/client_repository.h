#ifndef CLIENT_REPOSITORY_H
#define CLIENT_REPOSITORY_H

#include <iostream>
#include <optional>
#include <string>
#include <unordered_map>
#include <memory>

#include "../client/client.h"
#include "../crud_interface/crud_interface.h"

/**
 * @class ClientRepository
 * @brief A repository for managing client data
 */
class ClientRepository : public CRUDInterface<Client> {
 public:
  void Create(const Client&) override;
  std::optional<Client> Read(const int) const override;
  void Update(const int, const std::tuple<std::string, std::string, int>&) override;
  void Delete(const int) override;
  int GetSize() const { return my_clients_.size(); }
  friend std::ostream& operator<<(std::ostream&, const ClientRepository&);
 private:
  std::unordered_map<int, Client> my_clients_;
};

#endif