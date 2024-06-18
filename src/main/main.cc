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
  control_menu.HandleMainMenuUserInput(option);
  std::cin >> crud_option;
  Business company;
  if (option == kClientMenu) {
    switch (crud_option) {
      case 1:
        std::cout << "\n¿What is the client name?\n";
        std::string client_name = "";
        std::cin >> client_name;
        std::cout << "\n¿What is the client DNI?\n";
        std::string client_dni = "";
        std::cin >> client_dni;
        Client new_client(client_name, client_dni);
        company.GetMyClients().Create(new_client);
        break;
      case 2:
        company.GetMyClients().Read(new_client.GetId());
        break;
      case 3:
        std::tuple<std::string, std::string, int> kClientInfo;
        std::cout << "\n¿What would you like to update?\n";
        std::cout << "1. Name\n2. DNI\n3. Both\n";
        int update_option = 0;
        std::cin >> update_option;
        if (update_option == 1) {
          std::cout << "\n¿What name would you like to set?\n";
          std::string new_name = "";
          std::cin >> new_name;
          kClientInfo = std::make_tuple(new_name, new_client.GetDni(), new_client.GetId());
        }
        if (update_option == 2) {
          std::cout << "\n¿What DNI would you like to set?\n";
          std::string new_dni = "";
          std::cin >> new_dni;
          kClientInfo = std::make_tuple(new_client.GetName(), new_dni, new_client.GetId());
        }
        if (update_option == 3) {
          std::cout << "\n¿What name would you like to set?\n";
          std::string new_name = "";
          std::cin >> new_name;
          std::cout << "\n¿What DNI would you like to set?\n";
          std::string new_dni = "";
          std::cin >> new_dni;
          kClientInfo = std::make_tuple(new_name, new_dni, new_client.GetId());
        }
        company.GetMyClients().Update(update_option, kClientInfo);
        break;
      case 4:
        std::cout << "\n¿What client do you want to delete? (Select by ID)\n";
        std::cout << company.GetMyClients();
        int client_to_delete = 0;
        std::cin >> client_to_delete;
        company.GetMyClients().Delete(client_to_delete);
      default:
      std::cout << "\nThe option is not correct\n";
        break;
    }
  }
  if (option == kSupplierMenu) {
    switch (crud_option) {
      case 1:
        std::cout << "\n¿What is the supplier name?\n";
        std::string supplier_name = "";
        std::cin >> supplier_name;
        std::cout << "\n¿What is the supplier CIF?\n";
        std::string supplier_cif = "";
        std::cin >> supplier_cif;
        Supplier new_supplier(supplier_name, supplier_cif);
        company.GetMySuppliers().Create(new_supplier);
        break;
      case 2:
        company.GetMySuppliers().Read(new_supplier.GetId());
        break;
      case 3:
        std::tuple<std::string, std::string, int> kSupplierInfo;
        std::cout << "\n¿What would you like to update?\n";
        std::cout << "1. Name\n2. CIF\n3. Both\n";
        int update_option = 0;
        std::cin >> update_option;
        if (update_option == 1) {
          std::cout << "\n¿What name would you like to set?\n";
          std::string new_name = "";
          std::cin >> new_name;
          kSupplierInfo = std::make_tuple(new_name, new_supplier.GetCif(), new_supplier.GetId());
        }
        if (update_option == 2) {
          std::cout << "\n¿What CIF would you like to set?\n";
          std::string new_cif = "";
          std::cin >> new_cif;
          kSupplierInfo = std::make_tuple(new_supplier.GetName(), new_cif, new_supplier.GetId());
        }
        if (update_option == 3) {
          std::cout << "\n¿What name would you like to set?\n";
          std::string new_name = "";
          std::cin >> new_name;
          std::cout << "\n¿What CIF would you like to set?\n";
          std::string new_cif = "";
          std::cin >> new_cif;
          kSupplierInfo = std::make_tuple(new_name, new_cif, new_supplier.GetId());
        }
        company.GetMySuppliers().Update(update_option, kSupplierInfo);
        break;
      case 4:
        std::cout << "\n¿What supplier do you want to delete? (Select by ID)\n";
        std::cout << company.GetMySuppliers();
        int supplier_to_delete = 0;
        std::cin >> supplier_to_delete;
        company.GetMySuppliers().Delete(supplier_to_delete);
      default:
      std::cout << "\nThe option is not correct\n";
        break;
    }
  }

  return 0;
}