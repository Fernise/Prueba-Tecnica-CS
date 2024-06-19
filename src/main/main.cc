#include <iostream>
#include <tuple>
#include <string>
#include <ctime>

#include "../../include/business/business.h"
#include "../../include/crud_interface/crud_interface.h"
#include "../../include/menu/menu.h"
#include "../../include/utility/utility.h"


int main() {
  Menu control_menu;
  const int kClientMenu = 1;
  const int kSupplierMenu = 2;
  int option = 0;
  do {
    control_menu.ShowMainMenu();
    std::cin >> option;
    int crud_option = 0;
    control_menu.HandleMainMenuUserInput(option);
    std::cin >> crud_option;
    Business company;
    if (option == kClientMenu) {
      Client crud_client;
      std::string client_name = "";
      std::string client_dni = "";
      int client_id = 0;
      std::tuple<std::string, std::string, int> kClientInfo;
      int update_option = 0;
      switch (crud_option) {
        case 1: 
          AskClientCreate(client_name, client_dni);
          crud_client = Client(client_name, client_dni);
          company.GetMyClients().Create(crud_client);
          break;
        case 2:
          AskClientRead(client_id, company);
          company.GetMyClients().Read(client_id);
          break;
        case 3:
          update_option = AskClientUpdate(kClientInfo, crud_client);
          company.GetMyClients().Update(update_option, kClientInfo);
          break;
        case 4:
          AskClientDelete(client_id, company);
          company.GetMyClients().Delete(client_id);
          break;
        default:
        std::cout << "\nThe option is not correct\n";
          break;
      }
    }
    if (option == kSupplierMenu) {
      Supplier crud_supplier;
      std::string supplier_name = "";
      std::string supplier_cif = "";
      int supplier_id = 0;
      std::tuple<std::string, std::string, int> kSupplierInfo;
      int update_option = 0;
      switch (crud_option) {
        case 1:
          AskSupplierCreate(supplier_name, supplier_cif);
          crud_supplier.SetName(supplier_name);
          crud_supplier.SetCif(supplier_cif);
          company.GetMySuppliers().Create(crud_supplier);
          break;
        case 2:
          AskSupplierRead(supplier_id, company);
          company.GetMySuppliers().Read(supplier_id);
          break;
        case 3:
          update_option = AskSupplierUpdate(kSupplierInfo, crud_supplier);
          company.GetMySuppliers().Update(update_option, kSupplierInfo);
          break;
        case 4:
          AskSupplierDelete(supplier_id, company);
          company.GetMySuppliers().Delete(supplier_id);
          break;
        default:
        std::cout << "\nThe option is not correct\n";
          break;
      }
    }
  } while (option != 3);
  return 0;
}