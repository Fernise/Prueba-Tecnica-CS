#include <iostream>

#include "profile.h"


std::ostream& operator<<(std::ostream& os, const Profile& kMyProfile) {
  os << kMyProfile.GetName() << " " << kMyProfile.GetAge();

  return os;
}