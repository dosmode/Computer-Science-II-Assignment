cmake_minimum_required(VERSION 3.8)
project(doubly_linked_list_demo)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp doublyLL.h selfstufy.h)
add_executable(doubly_linked_list_demo ${SOURCE_FILES})