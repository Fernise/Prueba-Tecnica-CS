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
std::optional<Profile> ProfileCollection::ReadProfileInfo(const int kId) const {
  try {
    return profiles_group_.at(kId);
  } catch (const std::out_of_range& e) {
    std::cout << "Error: No se ha podido encontrar el perfil seleccionado\n";
    return std::nullopt;
  } 
}

// Update profile info
void ProfileCollection::UpdateProfile(const int kId, const std::tuple<std::string, int, int>& kProfileInfo) {
  const auto [kName, kAge, kMode] = kProfileInfo;
  try {
    switch(kMode) {
      // Mode == 1, updates name
      case 1: 
        profiles_group_.at(kId).SetName(kName);
        break;
      // Mode == 2, updates age
      case 2:
        profiles_group_.at(kId).SetAge(kAge);
        break;
      // Mode == 3, updates both
      case 3:
        profiles_group_.at(kId).SetName(kName);
        profiles_group_.at(kId).SetAge(kAge);  
        break;
      default:
        std::cout << "\nError: The profile has not been found\n";
    }
  } catch (const std::out_of_range& e) {
    std::cout << "Error: No se ha podido encontrar el perfil seleccionado\n";
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