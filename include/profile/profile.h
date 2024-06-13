#ifndef PROFILE_H
#define PROFILE_H

#include <iostream>
#include <string>

class Profile {
 public:
  Profile() = default;
  Profile(const std::string& kName, const int kAge) : name_(kName), age_(kAge) { };
  const std::string& GetName() const { return name_; }
  const int GetAge() const { return age_; }
  const int GetId() const { return id_; }
  void SetName(const std::string& kName) { name_ = kName; }
  void SetAge(const int kAge) { age_ = kAge; }
  void SetId(const int kId) { id_ = kId; }
  friend std::ostream& operator<<(std::ostream&, const Profile&);

 private:
  std::string name_ = "";
  int age_ = 0;
  int id_ = 0;
};

#endif