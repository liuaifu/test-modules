cmake_minimum_required(VERSION 3.19)
project(test-modules)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SRCS
	mymodule.cpp
	i_mymodule.ixx
	main.cpp
)

add_executable(${PROJECT_NAME} ${SRCS})
if(UNIX)
	target_compile_options(${PROJECT_NAME} PRIVATE -fmodules-ts)
endif()
