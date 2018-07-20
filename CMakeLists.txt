cmake_minimum_required(VERSION 3.5.1)
# cmake_minimum_required(VERSION 3.10)

project(Example-1)

# set(CMAKE_CXX_STANDARD 11)

# set clang as the default compiler
set(CMAKE_C_COMPILER "clang")
set(CMAKE_CXX_COMPILER "clang++")

# check the operating system and add the appropriate flags
if (APPLE)
        SET(CMAKE_CXX_FLAGS " -std=c++11 -g -fPIC -Wno-deprecated-declarations")
        SET(CMAKE_MODULE_LINKER_FLAGS "${CMAKE_MODULE_LINKER_FLAGS} -undefined dynamic_lookup")
elseif (UNIX AND NOT APPLE)
        SET(CMAKE_CXX_FLAGS " -std=c++11 -g -fPIC -Wno-deprecated-declarations")
endif ()


# set the directories with the common header files
include_directories("${PROJECT_SOURCE_DIR}/src/auto/headers")
include_directories("${PROJECT_SOURCE_DIR}/src/trucks/headers")



add_executable(
	Example-1
        src/main/sources/main.cpp
        src/auto/sources/Auto.cpp
        src/trucks/sources/Truck.cpp
        src/trucks/sources/BigTruck.cpp
	)
