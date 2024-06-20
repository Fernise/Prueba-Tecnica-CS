/**
 * @file business.cc
 * @author Fernando González Perdomo
 * @date 06-20-2024
 * @version 1.0
 * @brief Implementation of the Business class
 */

#include "../../include/business/business.h"

/**
 * @brief Insertion operator overload
 * @param os The std::ostream& object
 * @param kMyBusiness The business object to be sent to the output stream
 * @return os The std::ostream& object
 */
std::ostream& operator<<(std::ostream& os, const Business& kMyBusiness) {
  os << "Clientes: " << kMyBusiness.my_clients_ << "\n" << kMyBusiness.my_suppliers_;
  return os;
}