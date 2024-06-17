add_library(business SHARED
  business.cc)

target_include_directories(business PUBLIC
              ${CMAKE_CURRENT_LIST_DIR}/../../include/business
              ${CMAKE_CURRENT_LIST_DIR}/../../include/client_repository
              ${CMAKE_CURRENT_LIST_DIR}/../../include/supplier_repository)

              
target_link_libraries(business PRIVATE 
                      client_repository
                      supplier_repository)