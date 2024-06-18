#ifndef CRUD_INTERFACE_H
#define CRUD_INTERFACE_H

#include <iostream>
#include <string>
#include <optional>
#include <unordered_map>

template <class T>
class CRUDInterface {
 public:
  virtual void Create(const T&) = 0;
  virtual std::optional<T> Read(const int) const = 0;
  virtual void Update(const int, const std::tuple<std::string, std::string, int>&) = 0;
  virtual void Delete(const int) = 0;
};

#endif