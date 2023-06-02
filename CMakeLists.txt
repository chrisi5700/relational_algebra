cmake_minimum_required(VERSION 3.0.0)
project(relational_algebra VERSION 0.1.0)

include(CTest)
enable_testing()

add_library(relational_algebra relational_algebra.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
