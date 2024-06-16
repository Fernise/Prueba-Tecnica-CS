#ifndef CLIENT_REPOSITORY_H
#define CLIENT_REPOSITORY_H

#include <iostream>
#include <filesystem>
#include <fstream>
#include <optional>

#include "../client/client.h"
#include "../supplier/supplier.h"
#include "../crud_interface/crud_interface.h"

class ClientRepository : public CRUDInterface<Client> {
 public:
  void Create(const int, const Client&);
  std::optional<Client> Read(const int) const;
  void Update(const int, const std::tuple<std::string, std::string, int>&);
  void Delete(const int);
 private:
  std::unordered_map<int, Client> my_clients_;
};

#endif