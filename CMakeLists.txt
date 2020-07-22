cmake_minimum_required(VERSION 3.1 FATAL_ERROR)
project(myLib)

if(POLICY CMP0074)
	cmake_policy(SET CMP0074 NEW)
endif()

if(DEBUG)
    add_compile_options(-DDEBUG -std=c++11 -Wextra -pedantic -Wall)
else()
    add_compile_options(-std=c++11 -Wextra)
endif()


add_subdirectory(src)
