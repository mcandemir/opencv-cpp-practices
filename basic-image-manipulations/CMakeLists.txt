cmake_minimum_required(VERSION 3.18.0)

project(basic-image-manipulations)

find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

include_directories(include)
set(SOURCES src/main.cpp src/blurring.cpp include/blurring.hpp)

add_executable(main ${SOURCES})

target_link_libraries(main ${OpenCV_LIBS})
