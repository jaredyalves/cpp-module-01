cmake_minimum_required(VERSION 3.28)
project(cpp_module_01)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "-Wall -Werror -Wextra")

add_executable(zombie
        ex00/main.cpp
        ex00/Zombie.cpp
        ex00/Zombie.hpp
        ex00/newZombie.cpp
        ex00/randomChump.cpp)

add_executable(zombie_horde
        ex01/main.cpp
        ex01/Zombie.cpp
        ex01/Zombie.hpp
        ex01/zombieHorde.cpp)
