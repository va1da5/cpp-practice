cmake_minimum_required(VERSION 3.12)

project(HelloWorld VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(HelloWorld main.cpp)

configure_file(HelloWorldConfig.h.in HelloWorldConfig.h)

target_include_directories(HelloWorld PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )