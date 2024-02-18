
cmake_minimum_required(VERSION 3.25)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20 -O3 -fsanitize=address,undefined -Wall -Wextra -Wpedantic -Werror")
# set(CMAKE_VERBOSE_MAKEFILE ON)

project(testRunner)
# find_package(GTest REQUIRED)

file(GLOB children RELATIVE ${CMAKE_SOURCE_DIR} ${CMAKE_SOURCE_DIR}/src/*)

message(STATUS "CMAKE_CXX_COMPILER: ${CMAKE_CXX_COMPILER}")
message(STATUS "CMAKE_CXX_STANDARD: ${CMAKE_CXX_STANDARD}")
message(STATUS "CMAKE_CXX_FLAGS: ${CMAKE_CXX_FLAGS}")

foreach(child ${children})
  if(IS_DIRECTORY ${CMAKE_SOURCE_DIR}/${child})
    message(STATUS "Adding subdirectory: ${child}")
    add_subdirectory(${child})
  endif()
endforeach()


add_executable(2_4_F_miner 2_4_F_miner.cpp)




