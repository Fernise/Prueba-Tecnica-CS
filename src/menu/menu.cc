#include "../../include/menu/menu.h"


void Menu::ShowMainMenu() const {
  std::cout << "\nMAIN MENU\n";
  std::cout << "1. Manage clients.\n2. Manage suppliers.\n3.Close\n";
}

int Menu::HandleMainMenuUserInput(const int kOption) const {
  switch (kOption) {
    case 1:
      ShowClientMenu();
      return kOption;
      break;
    case 2:
      ShowSupplierMenu();
      return kOption;
      break;
    case 3:
      std::cout << "\nClosing application.\n";
      exit(EXIT_SUCCESS);
      break;
    default:
        std::cout << "\nThe selected option is not available. Try again.\n";
        break;
  }
  return -1;
}

void Menu::ShowClientMenu() const {
  std::cout << "\nCLIENT MENU\n";
  std::cout << "1. Create new client.\n";
  std::cout << "2. Read client.\n";
  std::cout << "3. Update client information.\n";
  std::cout << "4. Delete client\n";
}

void Menu::ShowSupplierMenu() const {
  std::cout << "\nSUPPLIER MENU\n";
  std::cout << "1. Create new supplier.\n";
  std::cout << "2. Read supplier.\n";
  std::cout << "3. Update supplier information.\n";
  std::cout << "4. Delete supplier\n";
}

int Menu::HandleClientMenuUserInput(const int kOption) const {

}

int Menu::HandleClientMenuUserInput(const int kOption) const {
  switch (kOption) {
    case 1:
      ShowClientMenu;
      break;
    case 2:
      ShowSupplierMenu();
      break;
    case 3:
      std::cout << "\nClosing application.\n";
      exit(EXIT_SUCCESS);
      break;
    default:
        std::cout << "\nThe selected option is not available. Try again.\n";
        break;
  }
}