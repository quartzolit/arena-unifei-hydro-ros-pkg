cmake_minimum_required(VERSION 2.8.3)
project(arena_unifei)

find_package(catkin REQUIRED COMPONENTS
	geometry_msgs
	nav_msgs
	robotino_node
	roscpp
	std_msgs
	tf
	)

include_directories(include ${catkin_INCLUDE_DIRS})

add_executable(arena_node 
	src/arena_unifei_node.cpp
	src/Robot.cpp
	src/Pioneer.cpp
	src/Festo.cpp
	src/AmigoBot.cpp
	src/P3_DX.cpp
	src/Robotino.cpp
	)
