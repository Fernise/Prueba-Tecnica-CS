#ifndef BUSINESS_H
#define BUSINESS_H

#include <iostream>
#include <unordered_map>
#include <string>
#include <tuple>
#include <optional>

#include "../client_repository/client_repository.h"
#include "../supplier_repository/supplier_repository.h"


class Business {
 public:
  Business() = default;
  friend std::ostream& operator<<(std::ostream&, const Business&);
 private:
  ClientRepository my_clients_;
  SupplierRepository my_suppliers_;
};

#endif