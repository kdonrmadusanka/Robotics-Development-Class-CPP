cmake_minimum_required(VERSION 3.10)
project(CPP_Robotics)

set(CMAKE_CXX_STANDARD 14)

set(OpenCV_DIR /usr/local/lib/cmake/opencv4)
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(CPP_Robotics
        Class1/compilation/main.cpp
        Class1/dev/my_first_library/main.cpp
        Class1/dev/my_first_library/tools.hpp
        Class1/dev/my_first_library/tools.cpp)

target_link_libraries(CPP_Robotics ${OpenCV_LIBS})

# This fixes CLion's indexer — tells it exactly where opencv2/ folder is
target_include_directories(CPP_Robotics PRIVATE /usr/local/include/opencv4)