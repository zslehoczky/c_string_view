cmake_minimum_required(VERSION 3.5)

project(c_string_view CXX)

set(CMAKE_CXX_STANDARD 23)

add_library(
    ${PROJECT_NAME}
INTERFACE
    declare/c_string_view.h
    define/c_string_view/c_str.hpp
    define/c_string_view/c_string_view.hpp
)

target_include_directories(
    ${PROJECT_NAME}
INTERFACE
    declare
    define
)

add_executable(test_${PROJECT_NAME} test/test_c_string_view.cpp)

target_link_libraries(
    test_${PROJECT_NAME}
PRIVATE
    ${PROJECT_NAME}
)
