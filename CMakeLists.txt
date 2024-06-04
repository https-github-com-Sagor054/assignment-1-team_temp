cmake_minimum_required(VERSION 3.5)
project(Assignment_TA)

########### Do not change these lines #########
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
###############################################


## These are for your understanding. Feel free to modify this part
include_directories(include)
link_directories(./ThirdParty/LibraryExample/)
include_directories(ThirdParty/LibraryExample/include)

file(GLOB_RECURSE SOURCES "src/*.cpp" main.cpp)
add_executable(demo_exe ${SOURCES})
target_link_libraries (demo_exe ExampleLibrary)