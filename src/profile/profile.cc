#include <iostream>

#include "../../include/profile/profile.h"

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
 * @brief Insertion operator overload
 * @param os The std::ostream object
 * @param kMyProfile The profile to be sent to the output stream
 * @return os The std::ostream object
 */
std::ostream& operator<<(std::ostream& os, const Profile& kMyProfile) {
  os << "Name: " << kMyProfile.GetName() << "\nAge: " << kMyProfile.GetAge();

  return os;
}