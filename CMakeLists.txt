cmake_minimum_required (VERSION 2.6)
project (ros)


add_definitions(-g -w -Wall )

add_executable(ros 
		main.cpp
		commbase.cpp
		gcs_mavlink.cpp 
	)
