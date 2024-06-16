add_library(profile SHARED
  profile.cc)

target_include_directories(profile PUBLIC
              ${CMAKE_CURRENT_LIST_DIR}/../../include/profile)   