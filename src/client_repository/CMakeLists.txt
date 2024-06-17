add_library(client_repository SHARED
  client_repository.cc)

target_include_directories(client_repository PUBLIC
              ${CMAKE_CURRENT_LIST_DIR}/../../include/client_repository
              ${CMAKE_CURRENT_LIST_DIR}/../../include/crud_interface)

target_link_libraries(client_repository PRIVATE 
                      client)