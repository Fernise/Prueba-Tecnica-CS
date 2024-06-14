#include <iostream>
#include <tuple>
#include <string>
#include <ctime>

#include "profile.h"
#include "profile_collection.h"


int main() {
  ProfileCollection y;
  std::string prueba = "Hola";
  std::string pruebas = "Cola";

  y.CreateProfile(prueba, 8);
  y.CreateProfile(pruebas, 9);
  std::cout << y;
  y.ReadProfileInfo(82);
  y.UpdateProfile(82);
  std::cout << y << "\n";
  y.DeleteProfile(82);
  std::cout << y;

  return 0;
}