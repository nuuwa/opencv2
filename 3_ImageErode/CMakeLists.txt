cmake_minimum_required(VERSION 2.8)
project( 3_ImageErode )
find_package( OpenCV REQUIRED )
add_executable( 3_ImageErode 3_ImageErode.cpp )
target_link_libraries( 3_ImageErode ${OpenCV_LIBS} )
