#include <iostream>
#include <tuple>

#include "../../include/supplier/supplier.h"

/**
 * @brief Supplier constructor
 * @param kName The supplier name
 * @param kCif The supplier CIF
 * @note IMPORTANT: see lambda function comment below
 */
Supplier::Supplier(const std::string& kName, const std::string& kCif) : name_(kName), cif_(kCif) { 
  // This constant is used as the maximum number the random value could be minus one 
  const int kMaxValue = 100;
  // The random value could be between 0 and 99
  const int kRandomValue = std::rand() % kMaxValue;
  // Lambda function which returns an ID for the new supplier
  auto GenerateId = [kName, kCif, kRandomValue]() -> int {
    const int kFirstLetter = 0;
    const int kLastSymbol = 8;
    return (kRandomValue / kName[kFirstLetter]) + kCif[kLastSymbol];
  };
  SetId(GenerateId());
}

/**
 * @brief Insertion operator overload
 * @param os The std::ostream object
 * @param kMySupplier The supplier to be sent to the output stream
 * @return os The std::ostream object
 */
std::ostream& operator<<(std::ostream& os, const Supplier& kMySupplier) {
  os << "Name: " << kMySupplier.name_ << "\nCIF: " << kMySupplier.cif_ << "\nID: " << kMySupplier.id_ << "\n";

  return os;
}