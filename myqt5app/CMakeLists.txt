cmake_minimum_required(VERSION 3.1.0)

project(myqt5app)

# find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# instruct CMake to run moc automatically when needed
set(CMAKE_AUTOMOC ON)

# create code from a list of Qt designer ui files
set(CMAKE_AUTOUIC ON)

# find the QtWidgets library
find_package(Qt5Widgets CONFIG REQUIRED)

# populate a CMake variable with the sources
set(PROJECT_SOURCES
    src/main.cpp
    src/mainwindow.ui
    src/mainwindow.cpp
)

# tell CMake to create the executable
add_executable(${PROJECT_NAME} WIN32 ${PROJECT_SOURCES})

# public include directory
target_include_directories(${PROJECT_NAME} PUBLIC include)

# use the widgets module from Qt 5
target_link_libraries(${PROJECT_NAME} Qt5::Widgets)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different $<TARGET_FILE:Qt5::Core>    $<TARGET_FILE_DIR:${PROJECT_NAME}>
    COMMAND ${CMAKE_COMMAND} -E copy_if_different $<TARGET_FILE:Qt5::Gui>     $<TARGET_FILE_DIR:${PROJECT_NAME}>
    COMMAND ${CMAKE_COMMAND} -E copy_if_different $<TARGET_FILE:Qt5::Widgets> $<TARGET_FILE_DIR:${PROJECT_NAME}>
    )
