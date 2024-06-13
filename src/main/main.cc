#include <iostream>
#include <tuple>
#include <string>
#include <ctime>

#include "../profile_collection/profile_collection.h"
#include "../profile/profile.h"


int main() {
  ProfileCollection y;
  std::string prueba = "Hola";
  std::string pruebas = "Cola";

  y.CreateProfile(prueba, 8);
  y.CreateProfile(pruebas, 9);
  // std::unordered_map<int, Profile> prueba{{1, x}};
  // y.SetProfilesGroup(prueba);
  std::cout << y;

  return 0;
}