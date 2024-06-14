#include <iostream>
#include <tuple>

#include "profile_collection.h"
#include "profile.h"

// CRUD profiles
// Creates a profile
void ProfileCollection::CreateProfile(const std::string& kName, const int kAge) {
  Profile new_profile(kName, kAge);
  // This constant is used as the maximum number the random value could be minus one 
  const int kMaxValue = 100;
  // The random value could be between 0 and 99
  const int kRandomValue = std::rand() % kMaxValue;
  new_profile.SetId((kRandomValue / kAge) + kName[0]);
  profiles_group_.emplace(new_profile.GetId(), new_profile);
}

// Read profile info
void ProfileCollection::ReadProfileInfo(const int kId) {
  const auto& kKey = profiles_group_.find(kId);
  if (kKey != profiles_group_.end()) {
    std::cout << "Nombre: " << kKey->second.GetName() << "\nEdad: " << kKey->second.GetAge() << "\n"; 
  } else {
    std::cout << "Error: No se ha podido encontrar el perfil seleccionado\n";
  } 
}

// Update profile info
void ProfileCollection::UpdateProfile(const int kId) {
  const auto& kKey = profiles_group_.find(kId);
  if (kKey != profiles_group_.end()) {
    std::cout << "What field would you like to change?(1/2)\n1. Name\n2. Age\n"; 
    int option = 0;
    std::cin >> option;
    (option == 1) ? kKey->second.UpdateName() : (option == 2) ? kKey->second.UpdateAge() : throw std::out_of_range("\nThe option must be valid\n");
  } else {
    std::cout << "\nError: The profile has not been found\n";
  }
}

// Remove profile
void ProfileCollection::DeleteProfile(const int kId) {
  const auto& kKey = profiles_group_.find(kId);
  if (kKey != profiles_group_.end()) {
    profiles_group_.erase(kKey);
  }
  else {
    std::cout << "\nError: The profile has not been found\n";
  }
}

std::ostream& operator<<(std::ostream& os, const ProfileCollection& kProfilesGroup) {
  for (const auto& kProfile : kProfilesGroup.GetProfilesGroup()) {
    os << "    " << kProfile.first << " (" << kProfile.second << ")\n";
  }
  return os;
}