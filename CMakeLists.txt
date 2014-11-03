cmake_minimum_required(VERSION 2.8.4)
project(libft)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O2 -Wall -Wextra -Werror")

file(GLOB SOURCE_FILES
	mem/*.c
	str/*.c
	list/*.c)

add_library(ft STATIC ${SOURCE_FILES})