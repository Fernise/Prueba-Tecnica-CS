#include "../../include/supplier_repository/supplier_repository.h"

void SupplierRepository::Create(const int kId, const Supplier& kObjectToInsert) {
  try {
    my_suppliers_.emplace(kId, kObjectToInsert);
  } catch (const std::exception& e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }
}

std::optional<Supplier> SupplierRepository::Read(const int kId) const {
  try { 
    return my_suppliers_.at(kId);
  } catch (const std::exception& e) {
    std::cerr << "Error: " << e.what() << std::endl;
    return std::nullopt;
  }
}

void SupplierRepository::Update(const int kMode, const std::tuple<std::string, std::string, int>& kSupplierInfo) {
  const auto [kName, kDni, kId] = kSupplierInfo;
  try {
    std::optional<Supplier> Supplier_to_update = Read(kId);
    switch(kMode) {
      // Mode == 1, updates name
      case 1: 
        Supplier_to_update->SetName(kName);
        break;
      // Mode == 2, updates DNI
      case 2:
        Supplier_to_update->SetCif(kDni);
        break;
      // Mode == 3, updates both
      case 3:
        Supplier_to_update->SetName(kName);
        Supplier_to_update->SetCif(kDni);
        break;
      default:
        std::cout << "\nError: The chosen mode is not valid\n";
    }
  } catch (const std::out_of_range& e) {
    std::cout << "\nError: The Supplier has not been found\n";
  }   
}

void SupplierRepository::Delete(const int kId) {
  try {
    Read(kId);
    my_suppliers_.erase(kId);
  } catch (const std::out_of_range& e) {
    std::cout << "\nError: The Supplier has not been found\n";
  } 
}
