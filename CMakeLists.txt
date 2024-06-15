cmake_minimum_required(VERSION 3.28)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_COMPILER "g++")

project(Common_Solutions)

add_subdirectory(src/profile)
add_subdirectory(src/profile_collection)

add_executable(${PROJECT_NAME} src/main/main.cc src/profile/profile.cc src/profile_collection/profile_collection.cc)

target_link_libraries(${PROJECT_NAME}
                      profile
                      profile_collection)  