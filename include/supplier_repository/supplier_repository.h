#ifndef SUPPLIER_REPOSITORY_H
#define SUPPLIER_REPOSITORY_H

#include <iostream>
#include <filesystem>
#include <fstream>
#include <optional>

#include "../supplier/supplier.h"
#include "../crud_interface/crud_interface.h"

class SupplierRepository : public CRUDInterface<Supplier> {
 public:
  void Create(const int, const Supplier&) override;
  std::optional<Supplier> Read(const int) const override;
  void Update(const int, const std::tuple<std::string, std::string, int>&) override;
  void Delete(const int) override;
 private:
  std::unordered_map<int, Supplier> my_suppliers_;
};

#endif