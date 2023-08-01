cmake_minimum_required(VERSION 3.5)

project(1000)

add_executable(main main.cpp)

target_compile_options(main PRIVATE
    -Wall -Wextra -pedantic -Werror
)
