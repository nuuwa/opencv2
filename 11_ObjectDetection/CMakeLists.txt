cmake_minimum_required(VERSION 2.8)
project( 11_ObjectDetection )
find_package( OpenCV REQUIRED )
add_executable( 11_ObjectDetection 11_ObjectDetection.cpp )
target_link_libraries( 11_ObjectDetection ${OpenCV_LIBS} )
