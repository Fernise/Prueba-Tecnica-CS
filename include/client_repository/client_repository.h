#ifndef CLIENT_REPOSITORY_H
#define CLIENT_REPOSITORY_H

#include <iostream>
#include <optional>
#include <string>

#include "../client/client.h"
#include "../crud_interface/crud_interface.h"

class ClientRepository : public CRUDInterface<Client> {
 public:
  void Create(const Client&) override;
  std::optional<Client> Read(const int) const override;
  void Update(const int, const std::tuple<std::string, std::string, int>&) override;
  void Delete(const int) override;
  friend std::ostream& operator<<(std::ostream&, const ClientRepository&);

 private:
  std::unordered_map<int, Client> my_clients_;
};

#endif