#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <string>
#include <optional>


class Client {
 public:  
  Client(const std::string&, const std::string&);
  // const std::string GetName() const override { return name_; }
  // const std::string GetDniOrCif() const override { return dni_; }
  // int GetId() const override { return id_; }
  void SetName(const std::string& kName) { name_ = kName; }
  void SetDni(const std::string& kDni) { dni_ = kDni; }  
  // void SetId(const int kId) override { id_ = kId; }
  friend std::ostream& operator<<(std::ostream&, const Client&);
 private:
  std::string name_ = "";
  std::string dni_ = "";
  int id_ = 0;
};

#endif