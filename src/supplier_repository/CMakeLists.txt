add_library(supplier_repository SHARED
  supplier_repository.cc)

target_include_directories(supplier_repository PUBLIC
              ${CMAKE_CURRENT_LIST_DIR}/../../include/supplier_repository
              ${CMAKE_CURRENT_LIST_DIR}/../../include/crud_interface) 
              
target_link_libraries(supplier_repository PRIVATE 
                      supplier)
      
        
