#include <iostream>
#include <tuple>
#include <chrono>

#include "profile_collection.h"

// CRUD profiles
// Creates a profile
void ProfileCollection::CreateProfile(const std::string& kName, const int kAge) {
  Profile new_profile(kName, kAge);
  // This constant is used as the maximum number the random value could be minus one 
  const int kMaxValue = 100;
  // The random value could be between 0 and 99
  const int kRandomValue = std::rand() % kMaxValue;
  new_profile.SetId((kRandomValue / kAge) + kName[0]);
  profiles_group_.emplace(new_profile.GetId(), new_profile);
}

// Read profile info
void ProfileCollection::ReadProfileInfo(const int kId) {
  const auto& kKey = profiles_group_.find(kId);
  if (kKey != profiles_group_.end()) {
    std::cout << "Nombre: " << kKey->second.GetName() << "\nEdad: " << kKey->second.GetAge() << "\n"; 
  }
  else {
    std::cout << "Error: No se ha podido encontrar el perfil seleccionado\n";
  } 
}

// // Update profile info
// void ProfileCollection::UpdateName() {
//   std::cout << "What name do you prefer? ";
//   std::string name = "";
//   std::cin >> name;
//   SetName(name);
// }

// void ProfileCollection::UpdateAge() {
//   std::cout << "How old are you?\n";
//   int age = 0;
//   std::cin >> age;
//   // Poner el try catch en el main
//   age > 1 && age <= 100 ? SetAge(age) : throw std::out_of_range("La edad debe ser válida");
// }

// // Remove profile
// void Profile::DeleteProfile() {
//   delete this;
// }

std::ostream& operator<<(std::ostream& os, const ProfileCollection& kProfilesGroup) {
  for (const auto& kProfile : kProfilesGroup.GetProfilesGroup()) {
    os << "    " << kProfile.first << " (" << kProfile.second << ")" << std::endl;
  }
  return os;
}