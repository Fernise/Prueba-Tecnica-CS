#ifndef PROFILE_COLLECTION_H
#define PROFILE_COLLECTION_H

#include <iostream>
#include <unordered_map>
#include <string>
#include <utility>
#include <tuple>

#include "../profile/profile.h"

class Profile;

class ProfileCollection {
 public:
  ProfileCollection() = default;
  const std::unordered_map<int, Profile>& GetProfilesGroup() const { return profiles_group_; }
  void SetProfilesGroup(const std::unordered_map<int, Profile>& profiles_group_to_set) { profiles_group_ = std::move(profiles_group_to_set); }
  void CreateProfile(const std::string&, const int);
  std::optional<Profile> ReadProfileInfo(const int) const;
  void UpdateProfile(const int, const std::tuple<std::string, int, int>&);
  void DeleteProfile(const int);
  std::optional<Profile> GetSingleProfile(const int kId) const;
  friend std::ostream& operator<<(std::ostream&, const ProfileCollection&);

 private:
  std::unordered_map<int, Profile> profiles_group_;
};

#endif