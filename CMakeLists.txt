cmake_minimum_required(VERSION 3.5)

project(MyQtApp)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

add_executable(MyQtApp main.cpp mainwindow.cpp)
target_link_libraries(MyQtApp PRIVATE Qt5::Widgets)

