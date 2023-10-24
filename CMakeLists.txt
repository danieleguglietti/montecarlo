cmake_minimum_required(VERSION 3.25)
project(MonteCarlo C)

set(CMAKE_C_STANDARD 11)
set(sources ${sources} src/euler.c include/montecarlo.h include/algorithm.h)

add_library(${PROJECT_NAME} ${sources})
target_include_directories(${PROJECT_NAME}
    PUBLIC
    $<INSTALL_INTERFACE:include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)
