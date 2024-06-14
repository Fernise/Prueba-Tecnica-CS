#ifndef PROFILE_H
#define PROFILE_H

#include <iostream>
#include <string>

class Profile {
 public:
  Profile() = default;
  Profile(const std::string& kName, const int kAge);
  const std::string& GetName() const { return name_; }
  constexpr int GetAge() const { return age_; }
  constexpr int GetId() const { return id_; }
  void SetName(const std::string& kName) { name_ = kName; }
  void SetAge(const int kAge) { age_ = kAge; }
  void SetId(const int kId) { id_ = kId; }
  void UpdateName(const std::string& kName);
  void UpdateAge(const int kAge);
  friend std::ostream& operator<<(std::ostream&, const Profile&);

 private:
  std::string name_ = "";
  int age_ = 0;
  int id_ = 0;
};

#endif