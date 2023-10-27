# Build configuration for the C++/Qt6 prototype of the remote vehicle control application

cmake_minimum_required(VERSION 3.21)
project(VehicleGuiQt)

# Output binary files in a common location
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

find_package(Qt6 COMPONENTS Widgets REQUIRED)

set(PRJ_SRC "src/main.cpp")

add_executable(VehicleGuiQt ${PRJ_SRC})
target_link_libraries(VehicleGuiQt PRIVATE Qt6::Widgets)
