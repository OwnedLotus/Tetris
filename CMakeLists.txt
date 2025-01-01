cmake_minimum_required(VERSION 3.30)
project(tetris)

include(FetchContent)
FetchContent_Declare(
	raylib
	GIT_REPOSITORY http://github.com/raysan5/raylib.git
)

FetchContent_MakeAvailable(raylib)

set(CMAKE_CXX_STANDARD 23)

set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -Werror")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")

include_directories(src)

add_executable(Main src/main.cpp)

target_link_libraries(Main PUBLIC raylib)

