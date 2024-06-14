add_library(profile_collection SHARED
  ../../include/profile_collection/profile_collection.h
  ../../include/profile/profile.h
  profile_collection.cc)

target_include_directories(profile_collection PUBLIC
              ${CMAKE_CURRENT_LIST_DIR}/../../include/profile_collection
              ${CMAKE_CURRENT_LIST_DIR}/../../include/profile)   