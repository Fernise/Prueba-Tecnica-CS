#ifndef UTILITY_H
#define UTILITY_H

#include <string>
#include <tuple>

#include "../business/business.h"

// Client side utility functions
void AskClientCreate(std::string&, std::string&);

void AskClientRead(int&, Business&);

int AskClientUpdate(std::tuple<std::string, std::string, int>&, Client&);

void AskClientDelete(int&, Business&);

// Supplier side utility functions
void AskSupplierCreate(std::string&, std::string&);

void AskSupplierRead(int&, Business&);

int AskSupplierUpdate(std::tuple<std::string, std::string, int>&, Supplier&);

void AskSupplierDelete(int&, Business&);

#endif