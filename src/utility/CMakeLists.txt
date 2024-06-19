add_library(utility SHARED
  utility.cc)

target_include_directories(utility PUBLIC
              ${CMAKE_CURRENT_LIST_DIR}/../../include/utility
              ${CMAKE_CURRENT_LIST_DIR}/../../include/business) 
              
target_link_libraries(utility PRIVATE 
                      business)

