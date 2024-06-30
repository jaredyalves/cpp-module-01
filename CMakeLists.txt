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

add_executable(brain ex02/main.cpp)

add_executable(violence
        ex03/main.cpp
        ex03/Weapon.cpp
        ex03/Weapon.hpp
        ex03/HumanA.cpp
        ex03/HumanA.hpp
        ex03/HumanB.cpp
        ex03/HumanB.hpp)

add_executable(sed ex04/main.cpp)

add_executable(harl
        ex05/main.cpp
        ex05/Harl.cpp
        ex05/Harl.hpp)

add_executable(harlFilter
        ex06/main.cpp
        ex06/Harl.cpp
        ex06/Harl.hpp)
