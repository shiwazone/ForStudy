# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)

# 项目信息
project(algorithm)
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin) 
SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

ADD_SUBDIRECTORY(../string bin/string)
ADD_SUBDIRECTORY(.. bin)
