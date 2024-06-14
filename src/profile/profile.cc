#include <iostream>

#include "profile.h"

/**
 * @brief Profile constructor
 * @param kName The profile name
 * @param kAge The profile age
 */
Profile::Profile(const std::string& kName, const int kAge) :  name_(kName), age_(kAge) { 
  // This constant is used as the maximum number the random value could be minus one 
  const int kMaxValue = 100;
  // The random value could be between 0 and 99
  const int kRandomValue = std::rand() % kMaxValue;
  // Lambda function which returns an ID for the new profile
  auto GenerateId = [kName, kAge, kRandomValue]() -> int {
    return (kRandomValue / kAge) + kName[0];
  };
  SetId(GenerateId());
}

/**
 * @brief Updates the profile name
 * @param kName The new profile name
 */
void Profile::UpdateName(const std::string& kName) {
  SetName(kName);
}

/**
 * @brief Updates the profile age
 * @param kAge The new profile age
 */
void Profile::UpdateAge(const int kAge) {
  (kAge > 1 && kAge <= 100) ? SetAge(kAge) : throw std::out_of_range("La edad debe ser válida");
}

/**
 * @brief Insertion operator overload
 * @param os The std::ostream object
 * @param kMyProfile The profile to be sent to the output stream
 */
std::ostream& operator<<(std::ostream& os, const Profile& kMyProfile) {
  os << kMyProfile.GetName() << " " << kMyProfile.GetAge();

  return os;
}