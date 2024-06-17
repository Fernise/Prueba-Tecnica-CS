#ifndef BUSINESS_H
#define BUSINESS_H

#include <iostream>

#include "../client_repository/client_repository.h"
#include "../supplier_repository/supplier_repository.h"
#include "../crud_interface/crud_interface.h"

class Business {
 public:
  Business() = default;
  ClientRepository GetMyClients() const { return my_clients_; }
  SupplierRepository GetMySuppliers() const { return my_suppliers_; }
  friend std::ostream& operator<<(std::ostream&, const Business&);
 private:
  ClientRepository my_clients_;
  SupplierRepository my_suppliers_;
};

#endif