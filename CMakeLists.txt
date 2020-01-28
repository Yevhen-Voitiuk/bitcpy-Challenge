cmake_minimum_required(VERSION 3.15)
project(bitcpy-Challenge C)

set(CMAKE_C_STANDARD 11)

include_directories(Include Source)
file(GLOB SOURCES "Source/*.c")

add_executable(bitcpy_Challenge ${SOURCES})