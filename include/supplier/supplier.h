#ifndef SUPPLIER_H
#define SUPPLIER_H

#include <iostream>
#include <string>

class Supplier {
 public:
  Supplier(const std::string&, const std::string&);
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