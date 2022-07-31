cmake_minimum_required(VERSION 3.16.3)
project(MessengerApp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(${PROJECT_NAME} src/main.cpp)

add_subdirectory(tests)
add_subdirectory(src)