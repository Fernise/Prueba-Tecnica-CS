#ifndef MENU_H
#define MENU_H

#include <iostream>
#include "../Business/business.h"

class Menu {
 public:
  void ShowMainMenu() const;
  int HandleMainMenuUserInput(const int) const;
 private:
  void ShowClientMenu() const;
  void ShowSupplierMenu() const;
};

#endif