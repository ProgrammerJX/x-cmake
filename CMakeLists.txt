cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(cmake_demo)

include(CMakeModules/common.cmake)
include(CMakeModules/FindBoost.cmake)

add_subdirectory(src)

# INSTALL --> CMAKE_INSTALL_PREFIX
install(DIRECTORY ${X_INCLUDE} DESTINATION ${CMAKE_INSTALL_PREFIX})
