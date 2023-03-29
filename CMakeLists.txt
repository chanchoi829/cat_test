cmake_minimum_required(VERSION 3.16)

project(cat)

#find_package(gtest REQUIRED)

add_executable(test ${PROJECT_SOURCE_DIR}/cat.cpp
    ${PROJECT_SOURCE_DIR}/gtest_learn.cpp
    ${PROJECT_SOURCE_DIR}/toy.cpp)

add_compile_options(-Wall -Wextra -Wpedantic)

target_include_directories(test PRIVATE /usr/local/include)
target_link_libraries(test PRIVATE /usr/local/lib/libgtest.a /usr/local/lib/libgmock.a)
