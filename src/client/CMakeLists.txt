add_library(client SHARED
  client.cc)

target_include_directories(client PUBLIC
              ${CMAKE_CURRENT_LIST_DIR}/../../include/client)   