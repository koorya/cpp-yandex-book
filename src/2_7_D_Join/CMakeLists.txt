cmake_minimum_required(VERSION 3.25)

project(Join)

find_package(GTest REQUIRED)


file(GLOB TEST_SOURCES ".test/*.cpp")

set(EXECUTABLE_TEST_RUNNER ${PROJECT_NAME}.test)
add_executable(${EXECUTABLE_TEST_RUNNER} ${TEST_SOURCES})

target_sources(${EXECUTABLE_TEST_RUNNER} PRIVATE ${PROJECT_NAME}.cpp)


target_link_libraries(${EXECUTABLE_TEST_RUNNER} GTest::gtest)
target_link_libraries(${EXECUTABLE_TEST_RUNNER} GTest::gmock)
target_link_libraries(${EXECUTABLE_TEST_RUNNER} GTest::gtest_main)

