# cmake version
cmake_minimum_required(VERSION 2.8.0)

# project
project(sample)

# message
message("message-none Important information")
message(STATUS "message-STATUS Incidental information")
message(WARNING "message-WARNING CMake Warning, continue processing")
message(SEND_ERROR "message-SEND_ERROR CMake Error, continue processing, but skip generation")
message(FATAL_ERROR "message FATAL_ERROR CMake Error, stop processing and generation")

# build target
add_executable(sample sample.c)
