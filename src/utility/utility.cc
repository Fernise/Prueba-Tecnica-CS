/**
 * @file utility.cc
 * @author Fernando González Perdomo
 * @date 06-20-2024
 * @version 1.0
 * @brief Implementation of the methods used for managing user inputs
 */

#include "../../include/utility/utility.h"

// CLIENT

/**
 * @brief Asks the client data
 * @param client_name The client name
 * @param client_dni The client DNI
 */
void AskClientCreate(std::string& client_name, std::string& client_dni) {
  std::cout << "\n¿What is the client name?\n";
  std::cin >> client_name;
  std::cout << "\n¿What is the client DNI?\n";
  std::cin >> client_dni;
} 

/**
 * @brief Asks the client id
 * @param client_id The client id
 * @param company The company which has associated the client 
 */
void AskClientRead(int& client_id, Business& company) {
  std::cout << "\n¿What client do you want to read? (Select by ID)\n";
  std::cin >> client_id;
} 

/**
 * @brief Asks the data to update from a client
 * @param kClientInfo The client data
 * @param client_to_update The client to be updated
 * @return update_option The option for updating the client data
 * @note: update_option: could be 1 (update just name), 2 (update just DNI), 3 (update both)
 */
int AskClientUpdate(std::tuple<std::string, std::string, int>& kClientInfo, Client& client_to_update) {
  std::cout << "\n¿What would you like to update?\n";
  std::cout << "1. Name\n2. DNI\n3. Both\n";
  int update_option = 0;
  std::cin >> update_option;
  if (update_option == 1) {
    std::cout << "\n¿What name would you like to set?\n";
    std::string new_name = "";
    std::cin >> new_name;
    kClientInfo = std::make_tuple(new_name, client_to_update.GetDni(), client_to_update.GetId());
  } else if (update_option == 2) {
    std::cout << "\n¿What DNI would you like to set?\n";
    std::string new_dni = "";
    std::cin >> new_dni;
    kClientInfo = std::make_tuple(client_to_update.GetName(), new_dni, client_to_update.GetId());
  } else if (update_option == 3) {
    std::cout << "\n¿What name would you like to set?\n";
    std::string new_name = "";
    std::cin >> new_name;
    std::cout << "\n¿What DNI would you like to set?\n";
    std::string new_dni = "";
    std::cin >> new_dni;
    kClientInfo = std::make_tuple(new_name, new_dni, client_to_update.GetId());
  }
  return update_option;
}

/**
 * @brief Asks the client to delete
 * @param client_id The client id
 * @param company The company which has associated the client
 */
void AskClientDelete(int& client_id, Business& company) {
  std::cout << "\n¿What client do you want to delete? (Select by ID)\n";
  std::cin >> client_id;
}

// SUPPLIER

/**
 * @brief Asks the supplier data
 * @param client_name The supplier name
 * @param client_cif The supplier CIF
 */
void AskSupplierCreate(std::string& supplier_name, std::string& supplier_cif) {
  std::cout << "\n¿What is the supplier name?\n";
  std::cin >> supplier_name;
  std::cout << "\n¿What is the supplier CIF?\n";
  std::cin >> supplier_cif;
} 

/**
 * @brief Asks the supplier id
 * @param supplier_id The supplier id
 * @param company The company which has associated the supplier 
 */
void AskSupplierRead(int& supplier_id, Business& company) {
  std::cout << "\n¿What supplier do you want to read? (Select by ID)\n";
  std::cin >> supplier_id;
} 

/**
 * @brief Asks the data to update from a supplier
 * @param kSupplierInfo The supplier data
 * @param supplier_to_update The supplier to be updated
 * @return update_option The option for updating the supplier data
 * @note: update_option: could be 1 (update just name), 2 (update just CIF), 3 (update both)
 */
int AskSupplierUpdate(std::tuple<std::string, std::string, int>& kSupplierInfo, Supplier& supplier_to_update) {
  std::cout << "\n¿What would you like to update?\n";
  std::cout << "1. Name\n2. CIF\n3. Both\n";
  int update_option = 0;
  std::cin >> update_option;
  if (update_option == 1) {
    std::cout << "\n¿What name would you like to set?\n";
    std::string new_name = "";
    std::cin >> new_name;
    kSupplierInfo = std::make_tuple(new_name, supplier_to_update.GetCif(), supplier_to_update.GetId());
  } else if (update_option == 2) {
    std::cout << "\n¿What CIF would you like to set?\n";
    std::string new_cif = "";
    std::cin >> new_cif;
    kSupplierInfo = std::make_tuple(supplier_to_update.GetName(), new_cif, supplier_to_update.GetId());
  } else if (update_option == 3) {
    std::cout << "\n¿What name would you like to set?\n";
    std::string new_name = "";
    std::cin >> new_name;
    std::cout << "\n¿What CIF would you like to set?\n";
    std::string new_cif = "";
    std::cin >> new_cif;
    kSupplierInfo = std::make_tuple(new_name, new_cif, supplier_to_update.GetId());
  }
  return update_option;
}

/**
 * @brief Asks the supplier to delete
 * @param supplier_id The supplier id
 * @param company The company which has associated the supplier
 */
void AskSupplierDelete(int& supplier_id, Business& company) {
  std::cout << "\n¿What supplier do you want to delete? (Select by ID)\n";
  std::cin >> supplier_id;
}