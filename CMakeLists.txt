
cmake_minimum_required(VERSION 3.5...3.16)

project(tl)

add_library(tl INTERFACE)

target_include_directories(tl INTERFACE include/tl)
