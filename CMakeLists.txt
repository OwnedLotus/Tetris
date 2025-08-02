cmake_minimum_required(VERSION 3.30)
project(tetris)

include(FetchContent)
FetchContent_Declare(
 raylib
 GIT_REPOSITORY http://github.com/raysan5/raylib.git
 GIT_TAG 5.5
)

FetchContent_MakeAvailable(raylib)

set(CMAKE_C_STANDARD 17)

set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -Werror")
set(CMAKE_C_FLAGS "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")

include_directories(src)

add_executable(Main src/main.c src/tetris/block.c src/tetris/manager.c src/tetris/piece.c)

target_link_libraries(Main PUBLIC raylib)
