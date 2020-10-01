cmake_minimum_required( VERSION 2.8 )

project( arlington_transit )

set( CMAKE_CXX_STANDARD 17 )

set(CMAKE_CXX_FLAGS "-O3 --std=c++17 -g")


add_executable( arlington_transit 
   src/ArlingtonTransit.cpp 
   src/Station.cpp 
   src/TransitLine.cpp )
