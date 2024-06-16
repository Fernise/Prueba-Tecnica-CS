#ifndef BUSINESS_H
#define BUSINESS_H

#include <iostream>
#include <unordered_map>
#include <string>
#include <tuple>
#include <optional>

#include "../client/client.h"
#include "../supplier/supplier.h"

class Business {
 public:
  Business() = default;
  friend std::ostream& operator<<(std::ostream&, const Business&);
 private:
  std::unordered_map<int, Client> my_clients_;
  std::unordered_map<int, Supplier> my_suppliers_;
  // std::unordered_map<int, Invoice> my_invoices;
};

#endif