#include "../../include/business/business.h"

template <class T>
void Business<T>::Create(const std::string& kName, const std::string& kDniOrCif) {
  try {
    T new_stakeholder(kName, kDniOrCif);
    my_clients_.emplace();
  } catch (const std::exception& e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }
}

template <class T>
std::optional<T> Business::Read(const int kId) {
  try { 
    database_.at(kId);
  } catch (const std::exception& e) {
    std::cerr << "Error: " << e.what() << std::endl;
    return std::nullopt;
  }
}

void Business::Update(const int, const std::tuple<std::string, std::string, int>&) {
  try { 
    database_.at(kId);
  } catch (const std::exception& e) {
    std::cerr << "Error: " << e.what() << std::endl;
    return std::nullopt;
  }
}

void Business::Delete(const int kId) {
  try { 
    database_.at(kId);
  } catch (const std::exception& e) {
    std::cerr << "Error: " << e.what() << std::endl;
    return std::nullopt;
  }
}