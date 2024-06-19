cmake_minimum_required(VERSION 3.28)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_COMPILER "g++")

project(Common_Solutions)

add_subdirectory(src/business)
add_subdirectory(src/client)
add_subdirectory(src/client_repository)
add_subdirectory(src/supplier)
add_subdirectory(src/supplier_repository)
add_subdirectory(src/menu)
add_subdirectory(src/utility)

add_executable(${PROJECT_NAME} src/main/main.cc src/client/client.cc src/client_repository/client_repository.cc src/supplier/supplier.cc 
                                src/supplier_repository/supplier_repository.cc src/business/business.cc src/menu/menu.cc src/utility/utility.cc)

target_link_libraries(${PROJECT_NAME}
                      client
                      client_repository
                      supplier
                      supplier_repository
                      business
                      menu
                      utility)