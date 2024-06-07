cmake_minimum_required(VERSION 3.28)
project(MiniMoba)

set(CMAKE_C_STANDARD 23)

include(FetchContent)
FetchContent_Declare(
        raylib
        GIT_REPOSITORY https://github.com/raysan5/raylib.git
        GIT_TAG 5.0
)
FetchContent_MakeAvailable(raylib)

add_executable(MiniMoba main.c)
target_link_libraries(MiniMoba raylib)
