cmake_minimum_required(VERSION 3.8)
project(Mod4)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES firstClass.cpp)
#set(SOURCE_FILES distanceClass.cpp)
#set(SOURCE_FILES counter.cpp)
set(SOURCE_FILES distanceClassArguments.cpp)
#set(SOURCE_FILES PointClass.cpp)
add_executable(Mod4 ${SOURCE_FILES})