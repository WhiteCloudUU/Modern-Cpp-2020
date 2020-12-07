cmake_minimum_required(VERSION 3.1)

project(homework_2)

set(CMAKE_CXX_STANDARD 17)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(task_1 guessing_game.cpp)
add_executable(task_2 input_arguments.cpp)


enable_testing()
add_subdirectory(tests)