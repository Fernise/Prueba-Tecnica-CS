/**
 * @file main.cc
 * @author Fernando González Perdomo
 * @date 06-20-2024
 * @version 1.0
 * @brief Main logic of the application
 */

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
  Business company;
  do {
    control_menu.ShowMainMenu();
    std::cin >> option;
    int crud_option = 0;
    control_menu.HandleMainMenuUserInput(option);
    std::cin >> crud_option;
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
          if (company.GetMyClients().GetSize() != 0) {
          std::cout << company.GetMyClients();
          AskClientRead(client_id, company);
          std::cout << *company.GetMyClients().Read(client_id);
          } else {
            std::cout << "\nThere are no clients available.\n";
          }
          break;
        case 3:
          if (company.GetMyClients().GetSize() != 0) {
            std::cout << company.GetMyClients();
            std::cout << "\n¿What client do you want to update? (Select by ID)\n";
            std::cin >> client_id;
            crud_client = *company.GetMyClients().Read(client_id);
            update_option = AskClientUpdate(kClientInfo, crud_client);
            company.GetMyClients().Update(update_option, kClientInfo);
          } else {
            std::cout << "\nThere are no clients available.\n";
          }
          break;
        case 4:
          if (company.GetMyClients().GetSize() != 0) {
            std::cout << company.GetMyClients(); 
            AskClientDelete(client_id, company);
            company.GetMyClients().Delete(client_id);
          } else {
            std::cout << "\nThere are no clients available.\n";
          }
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
          crud_supplier = Supplier(supplier_name, supplier_cif);
          company.GetMySuppliers().Create(crud_supplier);
          break;
        case 2:
          if (company.GetMySuppliers().GetSize() != 0) {
            std::cout << company.GetMySuppliers();
            AskSupplierRead(supplier_id, company);
            std::cout << *company.GetMySuppliers().Read(supplier_id);
          } else {
            std::cout << "\nThere are no suppliers available.\n";
          }
          break;
        case 3:
          if (company.GetMySuppliers().GetSize() != 0) {
            std::cout << company.GetMySuppliers();
            std::cout << "\n¿What supplier do you want to update? (Select by ID)\n";
            std::cin >> supplier_id;
            crud_supplier = *company.GetMySuppliers().Read(supplier_id);
            update_option = AskSupplierUpdate(kSupplierInfo, crud_supplier);
            company.GetMySuppliers().Update(update_option, kSupplierInfo);
          } else {
            std::cout << "\nThere are no suppliers available.\n";
          }
          break;
        case 4:
          if (company.GetMySuppliers().GetSize() != 0) {
            std::cout << company.GetMySuppliers();
            AskSupplierDelete(supplier_id, company);
            company.GetMySuppliers().Delete(supplier_id);
          } else {
            std::cout << "\nThere are no suppliers available.\n";
          }
          break;
        default:
        std::cout << "\nThe option is not correct\n";
          break;
      }
    }
  } while (option != 3);
  return 0;
}