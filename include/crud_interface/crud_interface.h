#ifndef CRUD_INTERFACE_H
#define CRUD_INTERFACE_H

#include <iostream>
#include <string>
#include <optional>

/**
 * @class CRUDInterface
 * @brief Abstract class with CRUD methods declaring a general purpose interface
 */
template <class T>
class CRUDInterface {
 public:
  virtual ~CRUDInterface() {}
  virtual void Create(const T&) = 0;
  virtual std::optional<T> Read(const int) const = 0;
  virtual void Update(const int, const std::tuple<std::string, std::string, int>&) = 0;
  virtual void Delete(const int) = 0;
};

#endif