#include <iostream>
#include <tuple>
#include <string>
#include <ctime>

#include "../../include/business/business.h"
#include "../../include/crud_interface/crud_interface.h"
#include "../../include/menu/menu.h"

int main() {
  Menu control_menu;
  control_menu.ShowMainMenu();
  int option = 0;
  std::cin >> option;
  const int kClientMenu = 1;
  const int kSupplierMenu = 2;
  int crud_option = 0;
  if (control_menu.HandleMainMenuUserInput(option) == kClientMenu) {
    crud_option = control_menu.HandleClientMenuUserInput(option);
  } else if (control_menu.HandleMainMenuUserInput(option) == kSupplierMenu) {
    crud_option = control_menu.HandleSupplierMenuUserInput(option);
  }
  switch () {
    case 1:
    case 2:
    case 3:
    case 4:
  }    
  }

  return 0;
}