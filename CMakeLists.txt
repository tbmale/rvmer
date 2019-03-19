cmake_minimum_required(VERSION 2.6)
project(rvmer)
include_directories( "${PROJECT_DIR}pmuc/src/api" "${PROJECT_DIR}pmuc/src/common")
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)

find_package(Boost)
IF (Boost_FOUND)
include_directories(${Boost_INCLUDE_DIR})
endif()

find_package(eigen3)
IF (eigen3_FOUND)
include_directories(${EIGEN3_INCLUDE_DIR})
message(STATUS "eigen: ${EIGEN3_INCLUDE_DIR}")
endif()

find_package(OpenGL REQUIRED)

file(GLOB SOURCES
  "${PROJECT_DIR}pmuc/src/api/*.cpp"
  "${PROJECT_DIR}pmuc/src/common/*.cpp"
  )
set(SOURCES
  ${SOURCES}
  rvmer.cpp   
  rvmerlib.cpp
  )

# file(GLOB SOURCES "${PROJECT_DIR}pmuc/src/common/*.cpp")

# add_library (lib-${PROJECT_NAME} STATIC ${SOURCES})
add_library (${PROJECT_NAME} SHARED ${SOURCES})

# target_link_libraries(lib-${PROJECT_NAME} ${OPENGL_LIBRARIES} )
target_link_libraries(${PROJECT_NAME} ${OPENGL_LIBRARIES} -static-libgcc -static-libstdc++)