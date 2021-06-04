cmake_minimum_required(VERSION 3.1) # Mandatory. 
project(first_project) # Mandatory. 
set(CMAKE_CXX_STANDARD 17) # Use c++17.

set(CMAKE_INSTALL_PREFIX ./install)

# tell cmake where to look for *.hpp, *.h files
include_directories(include/) # create library "libtools"

add_library(ipb_arithmetic src/sum.cpp src/subtract.cpp) 

add_executable(main src/main.cpp) # main.o

# tell the linker to bind these objects together 
target_link_libraries(main ipb_arithmetic) # ./main

install(TARGETS ipb_arithmetic DESTINATION ${CMAKE_INSTALL_PREFIX})