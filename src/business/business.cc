#include "../../include/business/business.h"

// void Business::WriteMyClients()  {
//   std::cout << "holaaa";
//   std::cout << my_clients_;
// }
// void Business::WriteMySuppliers()  {
//   std::cout << my_suppliers_;
// }
 
std::ostream& operator<<(std::ostream& os, const Business& kMyBusiness) {
  os << "Clientes: " << kMyBusiness.my_clients_ << "\n" << kMyBusiness.my_suppliers_;
  return os;
}