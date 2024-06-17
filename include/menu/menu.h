#ifndef MENU_H
#define MENU_H

#include <iostream>

class Menu {
 public:
  void ShowMainMenu() const;
  int HandleMainMenuUserInput(const int) const;
  int HandleClientMenuUserInput(const int) const;
  int HandleSupplierMenuUserInput(const int) const;
 private:
  void ShowClientMenu() const;
  void ShowSupplierMenu() const;
};

#endif