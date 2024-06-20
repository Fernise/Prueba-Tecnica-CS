/**
 * @file supplier_repository.cc
 * @author Fernando González Perdomo
 * @date 06-20-2024
 * @version 1.0
 * @brief Implementation of the SupplierRepository class
 */

#include "../../include/supplier_repository/supplier_repository.h"

/**
 * @brief Creates a new supplier in the repository
 * @param kId The std::ostream object
 * @param kMySupplier The new supplier to insert in the repository
 */
void SupplierRepository::Create(const Supplier& new_supplier) {
  try {
    my_suppliers_.emplace(new_supplier.GetId(), new_supplier);
  } catch (const std::exception& e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }
}

/**
 * @brief Reads a supplier found by its id
 * @param kId The supplier id
 * @return std::optional<T> If an id is found, return the supplier associated, otherwise, a null value
 */
std::optional<Supplier> SupplierRepository::Read(const int kId) const {
  try { 
    return my_suppliers_.at(kId);
  } catch (const std::exception& e) {
    std::cerr << "Error: " << e.what() << std::endl;
    return std::nullopt;
  }
}

/**
 * @brief Updates the supplier information
 * @param kMode The working mode (only update the name, cif or both)
 * @param kMySupplierInfo The supplier information candidate to be updated
 */
void SupplierRepository::Update(const int kMode, const std::tuple<std::string, std::string, int>& kSupplierInfo) {
  const auto [kName, kDni, kId] = kSupplierInfo;
  try {
    std::optional<Supplier> supplier_to_update = *Read(kId);
    switch(kMode) {
      // Mode == 1, updates name
      case 1: 
        supplier_to_update->SetName(kName);
        break;
      // Mode == 2, updates DNI
      case 2:
        supplier_to_update->SetCif(kDni);
        break;
      // Mode == 3, updates both
      case 3:
        supplier_to_update->SetName(kName);
        supplier_to_update->SetCif(kDni);
        break;
      default:
        std::cout << "\nError: The chosen mode is not valid\n";
    }
    my_suppliers_[supplier_to_update->GetId()] = *supplier_to_update;
  } catch (const std::out_of_range& e) {
    std::cout << "\nError: The supplier has not been found\n";
  }   
}

/**
 * @brief Deletes a supplier from the repository
 * @param kId The id of the supplier
 */
void SupplierRepository::Delete(const int kId) {
  try {
    Read(kId);
    my_suppliers_.erase(kId);
  } catch (const std::out_of_range& e) {
    std::cout << "\nError: The supplier has not been found\n";
  } 
}

/**
 * @brief Insertion operator overload
 * @param os The std::ostream& object
 * @param kMySupplierRepository The supplier repository object to be sent to the output stream
 * @return os The std::ostream& object
 */
std::ostream& operator<<(std::ostream& os, const SupplierRepository& kMySupplierRepository) {
  for (const auto& kSupplier : kMySupplierRepository.my_suppliers_) {
    os << "ID:" << kSupplier.second.GetId() << "\n";
  }

  return os;
}