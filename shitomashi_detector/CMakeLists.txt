cmake_minimum_required(VERSION 2.8)
project( shitomashi_detector )
find_package( OpenCV REQUIRED )
add_executable( shitomashi_detector shitomashi_detector.cpp )
target_link_libraries( shitomashi_detector ${OpenCV_LIBS} )
