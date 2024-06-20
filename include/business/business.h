#ifndef BUSINESS_H
#define BUSINESS_H

#include <iostream>

#include "../client_repository/client_repository.h"
#include "../supplier_repository/supplier_repository.h"

/**
 * @class Business
 * @brief Represents a Business composed of a group of clients and suppliers
 */
class Business {
 public:
  Business() = default;
  ClientRepository& GetMyClients() { return my_clients_; }
  SupplierRepository& GetMySuppliers() { return my_suppliers_; }
  friend std::ostream& operator<<(std::ostream&, const Business&);
 private:
  ClientRepository my_clients_;
  SupplierRepository my_suppliers_;
};

#endif