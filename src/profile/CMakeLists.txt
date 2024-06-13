add_library(profile SHARED
  ../../include/profile/profile.h
  profile.cc)

target_include_directories(profile PUBLIC
              ${CMAKE_CURRENT_LIST_DIR}/../../include/profile)   