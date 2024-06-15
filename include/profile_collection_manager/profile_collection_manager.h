#include <string>
#include <tuple>
#include <optional>
 
#include "../profile/profile.h"
#include "../profile_collection/profile_collection.h"

class ProfileCollectionManager : public ProfileCollection {
 public:
  void CreateProfile(const std::string&, const int);
  std::optional<Profile> ReadProfileInfo(const int) const;
  void UpdateProfile(const int, const std::tuple<std::string, int, int>&) ;
  void DeleteProfile(const int);
};