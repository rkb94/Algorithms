cmake_minimum_required(VERSION 3.0.0)
project(./1260/main VERSION 0.1.0)

include(CTest)
enable_testing()

add_library(./1260/main ./1260/main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
