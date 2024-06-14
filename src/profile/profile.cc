#include <iostream>

#include "profile.h"


Profile::Profile(const std::string& kName, const int kAge) { 
  // This constant is used as the maximum number the random value could be minus one 
  const int kMaxValue = 100;
  // The random value could be between 0 and 99
  const int kRandomValue = std::rand() % kMaxValue;
  SetId((kRandomValue / kAge) + kName[0]);
}


void Profile::UpdateName() {
  std::cout << "What name do you prefer?\n";
  std::string name = "";
  std::cin >> name;
  SetName(name);
  std::cout << "\nYour name has been successfully changed\n";
}

void Profile::UpdateAge() {
  std::cout << "How old are you?\n";
  int age = 0;
  std::cin >> age;
  // Poner el try catch en el main
  age > 1 && age <= 100 ? SetAge(age) : throw std::out_of_range("La edad debe ser válida");
}


std::ostream& operator<<(std::ostream& os, const Profile& kMyProfile) {
  os << kMyProfile.GetName() << " " << kMyProfile.GetAge();

  return os;
}