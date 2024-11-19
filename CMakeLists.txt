cmake_minimum_required(VERSION 3.12)
project(test-modules)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SRCS
	i_mymodule.ixx
	mymodule.cpp
	main.cpp
)
add_executable(${PROJECT_NAME} ${SRCS})
#target_sources(${PROJECT_NAME}
#		PUBLIC
#		FILE_SET all_my_modules TYPE CXX_MODULES FILES
#		mymodule.ixx
#)
if(UNIX)
	target_compile_options(${PROJECT_NAME} PRIVATE -fmodules-ts -x c++)
endif()
