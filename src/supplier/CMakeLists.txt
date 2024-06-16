add_library(profile_collection SHARED
  profile_collection.cc)

target_include_directories(profile_collection PUBLIC
              ${CMAKE_CURRENT_LIST_DIR}/../../include/profile_collection
              ${CMAKE_CURRENT_LIST_DIR}/../../include/profile)   

target_link_libraries(profile_collection PRIVATE
  profile)