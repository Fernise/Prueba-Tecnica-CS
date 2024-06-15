#ifndef PROFILE_COLLECTION_H
#define PROFILE_COLLECTION_H

#include <iostream>
#include <unordered_map>
#include <string>
#include <utility>
#include <tuple>
#include <optional>

#include "../profile/profile.h"

class Profile;

class ProfileCollection {
 public:
  ProfileCollection() = default;
  /// @brief Gets the collection of profiles
  /// @return const std::unordered_map<int, Profile>& Returns that collection
  const std::unordered_map<int, Profile>& GetProfilesGroup() const { return profiles_group_; }
  /// @brief Gets the collection of profiles
  /// @return std::unordered_map<int, Profile>& Returns that collection
  std::unordered_map<int, Profile>& GetProfilesGroup() { return profiles_group_; }
  /// @brief Sets a new collection of profiles
  /// @param const std::unordered_map<int, Profile>& The collection to set
  void SetProfilesGroup(const std::unordered_map<int, Profile>& profiles_group_to_set) { profiles_group_ = std::move(profiles_group_to_set); }
  std::optional<Profile> GetProfile(const int) const;
  void InsertProfile (const Profile& kNewProfile); 
  friend std::ostream& operator<<(std::ostream&, const ProfileCollection&);

 protected:
  std::unordered_map<int, Profile> profiles_group_;
};

#endif