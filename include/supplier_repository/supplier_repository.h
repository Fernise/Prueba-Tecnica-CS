#ifndef SUPPLIER_REPOSITORY_H
#define SUPPLIER_REPOSITORY_H

#include <iostream>
#include <optional>
#include <string>
#include <unordered_map>

#include "../supplier/supplier.h"
#include "../crud_interface/crud_interface.h"

/**
 * @class SupplierRepository
 * @brief A repository for managing supplier data
 */
class SupplierRepository : public CRUDInterface<Supplier> {
 public:
  void Create(const Supplier&) override;
  std::optional<Supplier> Read(const int) const override;
  void Update(const int, const std::tuple<std::string, std::string, int>&) override;
  void Delete(const int) override;
  int GetSize() const { return my_suppliers_.size(); }
  friend std::ostream& operator<<(std::ostream&, const SupplierRepository&);
 private:
  std::unordered_map<int, Supplier> my_suppliers_;
};

#endif