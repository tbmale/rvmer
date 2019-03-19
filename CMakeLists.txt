cmake_minimum_required(VERSION 2.6)
project(rvmer)
include_directories( "${PROJECT_SOURCE_DIR}pmuc/src/api" "${PROJECT_SOURCE_DIR}pmuc/src/common" )
add_library (my_library STATIC|SHARED rvmer.cpp)
find_package(Boost)
IF (Boost_FOUND)
include_directories(${Boost_INCLUDE_DIR})
endif()