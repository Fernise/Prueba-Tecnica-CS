#include <iostream>
#include <tuple>

#include "../../include/profile_collection/profile_collection.h"

/**
 * @brief Inserts a new profile in the collection
 * @param kNewProfile The profile to insert in
 */
void ProfileCollection::InsertProfile(const Profile& kNewProfile) {
  profiles_group_.emplace(kNewProfile.GetId(), kNewProfile); 
}

/**
 * @brief Gets a simple profile from the collection
 * @param kId The profile ID
 * @return std::optional<Profile> If found, returns a profile from the collection, otherwise, a null value
 */
std::optional<Profile> ProfileCollection::GetProfile(const int kId) const {
  try {
    return GetProfilesGroup().at(kId);
  } catch (const std::out_of_range& e) {
    std::cout << "Error: No se ha podido encontrar el perfil seleccionado\n";
    return std::nullopt;
  } 
}

/**
 * @brief Insertion operator overload
 * @param os The std::ostream object
 * @param kProfilesGroup The group of profiles to be sent to the output stream
 * @return os The std::ostream object
 */
std::ostream& operator<<(std::ostream& os, const ProfileCollection& kProfilesGroup) {
  for (const auto& kProfile : kProfilesGroup.GetProfilesGroup()) {
    os << "    " << kProfile.first << " (" << kProfile.second << ")\n";
  }
  return os;
}