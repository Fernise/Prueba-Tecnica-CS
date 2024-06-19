#ifndef SUPPLIER_H
#define SUPPLIER_H

#include <iostream>
#include <string>

class Supplier {
 public:
  Supplier() = default;
  Supplier(const std::string&, const std::string&);
  std::string GetName() const { return name_; }
  std::string GetCif() const { return cif_; }
  int GetId() const { return id_; }
  void SetName(const std::string& kName) { name_ = kName; }
  void SetCif(const std::string& kCif) { cif_ = kCif; }
  void SetId(const int kId) { id_ = kId; }
  friend std::ostream& operator<<(std::ostream&, const Supplier&);
 private:
  std::string name_ = "";
  std::string cif_ = "";
  int id_ = 0;
};

#endif