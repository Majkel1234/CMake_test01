cmake_minimum_required(VERSION 2.8)
project(myProject C CXX)

add_executable(myProgram main.cpp)

add_library(isEven isEven.cpp)
add_library(isHigherThan100 isHigherThan100.cpp)

target_link_libraries(myProgram isEven isHigherThan100)

option(addFlag "Adding '-Wall' flag.")

if(${addFlag})
	set(CMAKE_CXX_FLAGS "-Wall")
	message(STATUS "Dodatkowe flagi kompilacji: ${CMAKE_CXX_FLAGS}")
endif()
