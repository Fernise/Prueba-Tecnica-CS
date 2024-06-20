#ifndef MENU_H
#define MENU_H

#include <iostream>

/**
 * @class Menu
 * @brief Manages the user inputs
 */
class Menu {
 public:
  void ShowMainMenu() const;
  void HandleMainMenuUserInput(const int) const;
 private:
  void ShowClientMenu() const;
  void ShowSupplierMenu() const;
};

#endif