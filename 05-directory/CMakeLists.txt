# cmake version
cmake_minimum_required(VERSION 2.8.0)

# project
project(sample)

# message
message(STATUS "PROJECT_BINARY_DIR: " ${PROJECT_BINARY_DIR})
message(STATUS "PROJECT_SOURCE_DIR: " ${PROJECT_SOURCE_DIR})

# include directory
include_directories(${PROJECT_SOURCE_DIR}/include)

# source directory
aux_source_directory(${PROJECT_SOURCE_DIR}/app SRCS)
aux_source_directory(${PROJECT_SOURCE_DIR}/src SRCS)

message(STATUS "SRCS: " ${SRCS})

# build target
add_executable(sample ${SRCS})
