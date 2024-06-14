#include <iostream>
#include <tuple>

#include "profile_collection.h"
#include "profile.h"

// CRUD profiles
// Creates a profile
void ProfileCollection::CreateProfile(const std::string& kName, const int kAge) {
  Profile new_profile(kName, kAge);
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
void ProfileCollection::UpdateProfile(const int kId, const std::tuple<std::string, int, int>& kProfileInfo) {
  const auto& kKey = profiles_group_.find(kId);
  const auto [kName, kAge, kMode] = kProfileInfo;
  // Mode == 1, updates name
  if (kKey != profiles_group_.end() && kMode == 1) {
    kKey->second.UpdateName(kName);
  // Mode == 2, updates age
  } else if (kKey != profiles_group_.end() && kMode == 2) {
    kKey->second.UpdateAge(kAge);
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