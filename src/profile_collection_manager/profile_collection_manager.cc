#include "../../include/profile_collection_manager/profile_collection_manager.h"
#include "../../include/profile_collection/profile_collection.h"

/**
 * @brief Creates a new profile object
 * @param kName The profile name
 * @param kAge The profile age
 */
void ProfileCollectionManager::CreateProfile(const std::string& kName, const int kAge) {
  Profile new_profile(kName, kAge);
  InsertProfile(new_profile);
}

std::optional<Profile> ProfileCollectionManager::ReadProfileInfo(const int kId) const {
  try {
    return GetProfile(kId);
  } catch (const std::out_of_range& e) {
    std::cout << "\nError: The profile has not been found\n";
    return std::nullopt;
  } 
}

void ProfileCollectionManager::UpdateProfile(const int kId, const std::tuple<std::string, int, int>& kProfileInfo) {
  const auto [kName, kAge, kMode] = kProfileInfo;
  try {
    std::optional<Profile> profile_to_update = GetProfile(kId);
    switch(kMode) {
      // Mode == 1, updates name
      case 1: 
        profile_to_update->SetName(kName);
        break;
      // Mode == 2, updates age
      case 2:
        profile_to_update->SetAge(kAge);
        break;
      // Mode == 3, updates both
      case 3:
        profile_to_update->SetName(kName);
        profile_to_update->SetAge(kAge);  
        break;
      default:
        std::cout << "\nError: The chosen mode is not valid\n";
    }
  } catch (const std::out_of_range& e) {
    std::cout << "\nError: The profile has not been found\n";
  }   
}

void ProfileCollectionManager::DeleteProfile(const int kId) {
  try {
    std::optional<Profile> profile_to_delete = GetProfile(kId);
    GetProfilesGroup().erase(kId);
  } catch (const std::out_of_range& e) {
    std::cout << "\nError: The profile has not been found\n";
  } 
} 