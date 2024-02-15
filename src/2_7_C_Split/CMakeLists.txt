cmake_minimum_required(VERSION 3.25)

project(Split)

find_package(GTest REQUIRED)

message(STATUS "CMAKE_CXX_FLAGS: ${CMAKE_CXX_FLAGS}")

file(GLOB TEST_SOURCES ".test/*.cpp")

set(EXECUTABLE_TEST_RUNNER ${PROJECT_NAME}test)
add_executable(${EXECUTABLE_TEST_RUNNER} ${TEST_SOURCES})

target_sources(${EXECUTABLE_TEST_RUNNER} PRIVATE ${PROJECT_NAME}.cpp)


target_link_libraries(${EXECUTABLE_TEST_RUNNER} GTest::gtest)
target_link_libraries(${EXECUTABLE_TEST_RUNNER} GTest::gmock)
target_link_libraries(${EXECUTABLE_TEST_RUNNER} GTest::gtest_main)


get_target_property(MY_TARGET_COMPILE_OPTIONS ${EXECUTABLE_TEST_RUNNER} COMPILE_OPTIONS)
message(STATUS "Compile options for my_target: ${MY_TARGET_COMPILE_OPTIONS}")
