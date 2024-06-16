#ifndef SUPPLIER_REPOSITORY_H
#define SUPPLIER_REPOSITORY_H

#include <iostream>
#include <filesystem>
#include <fstream>
#include <optional>

#include "../client/client.h"
#include "../supplier/supplier.h"
#include "../crud_interface/crud_interface.h"

class SupplierRepository : public CRUDInterface<Supplier> {
 public:
  void Create(const int, const Supplier&);
  std::optional<Supplier> Read(const int) const;
  void Update(const int, const std::tuple<std::string, std::string, int>&);
  void Delete(const int);
 private:
  std::unordered_map<int, Supplier> my_suppliers_;
};

#endif