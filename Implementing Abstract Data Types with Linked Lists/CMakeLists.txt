cmake_minimum_required(VERSION 3.8)
project(Implementing_Abstract_Data_Types_with_Linked_Lists)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp stackLL.h queueLL.h priorityQueueLL.h)
add_executable(Implementing_Abstract_Data_Types_with_Linked_Lists ${SOURCE_FILES})