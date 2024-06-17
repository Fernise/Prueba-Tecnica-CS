add_library(menu SHARED
  menu.cc)

target_include_directories(menu PUBLIC
              ${CMAKE_CURRENT_LIST_DIR}/../../include/menu)