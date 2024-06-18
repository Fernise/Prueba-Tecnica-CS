#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <string>
#include <optional>

class Client {
 public:  
  Client(const std::string& kName, const std::string& kDni);
  std::string GetName() const { return name_; }
  std::string GetDni() const { return dni_; }
  int GetId() const { return id_; }
  void SetName(const std::string& kName) { name_ = kName; }
  void SetDni(const std::string& kDni) { dni_ = kDni; } 
  void SetId(const int kId) { id_ = kId; }  
  friend std::ostream& operator<<(std::ostream&, const Client&);
 private:
  std::string name_ = "";
  std::string dni_ = "";
  int id_ = 0;
};

#endif