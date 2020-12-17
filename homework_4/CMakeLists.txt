cmake_minimum_required(VERSION 3.1.0)

project(homework_4)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)

message("!!! ${EXECUTABLE_OUTPUT_PATH} !!!")

include_directories(${PROJECT_SOURCE_DIR})

#add_library(homework_4 homework_4.cpp)

add_executable(${PROJECT_NAME}_main main.cpp)

#target_link_libraries(${PROJECT_NAME}_main homework_4)
