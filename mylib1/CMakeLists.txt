cmake_minimum_required(VERSION 3.0)
project(mylib1)

add_library(${PROJECT_NAME} src/foo.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC include)
