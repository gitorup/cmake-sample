# cmake version
cmake_minimum_required(VERSION 2.8.0)

# project
project(sample)

# message
message(STATUS "PROJECT_BINARY_DIR: " ${PROJECT_BINARY_DIR})
message(STATUS "PROJECT_SOURCE_DIR: " ${PROJECT_SOURCE_DIR})

# set
set(SRCS ${PROJECT_SOURCE_DIR}/sample.c)
set(CONFIG_DEBUG_SUPPORT	ON)

if (${CONFIG_DEBUG_SUPPORT})
message(STATUS "config debug support")
endif()

# build target
add_executable(sample ${SRCS})
