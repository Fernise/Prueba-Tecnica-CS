add_library(supplier SHARED
  supplier.cc)

target_include_directories(supplier PUBLIC
              ${CMAKE_CURRENT_LIST_DIR}/../../include/supplier)
              
