cmake_minimum_required(VERSION 3.0)
project(myapp2)

add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME} PUBLIC mylib1)
