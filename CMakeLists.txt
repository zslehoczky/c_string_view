cmake_minimum_required(VERSION 4.0)

project(c_string_view CXX)

set(CMAKE_CXX_STANDARD 23)

add_library(
    ${PROJECT_NAME}
STATIC
    compile/c_string_view.cpp
    declare/c_string_view.h
    define/c_string_view/c_string_view_data.hpp
)

target_include_directories(
    ${PROJECT_NAME}
PUBLIC
    declare
    define
)

add_executable(test_${PROJECT_NAME} test/test_c_string_view.cpp)

target_link_libraries(
    test_${PROJECT_NAME}
PRIVATE
    ${PROJECT_NAME}
)
