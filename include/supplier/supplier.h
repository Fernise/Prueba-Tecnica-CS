#ifndef SUPPLIER_H
#define SUPPLIER_H

#include <iostream>
#include <string>

class Supplier {
 public:
  Supplier(const std::string&, const std::string&);
  // const std::string GetName() const override { retur n name_; }
  // const std::string GetDniOrCif() const override { return cif_; }
  // int GetId() const override { return id_; }
  void SetName(const std::string& kName) { name_ = kName; }
  void SetCif(const std::string& kCif) { cif_ = kCif; }
  // void SetId(const int kId) override { id_ = kId; }
  friend std::ostream& operator<<(std::ostream&, const Supplier&);
 private:
  std::string name_ = "";
  std::string cif_ = "";
  int id_ = 0;
};

#endif