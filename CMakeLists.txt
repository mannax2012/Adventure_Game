cmake_minimum_required(VERSION 3.25)
project(adventure_game)

set(CMAKE_CXX_STANDARD 20)

add_executable(adventure_game main.cpp main.h combat.cpp combat.h weapons.cpp weapons.h character.cpp character.h includes.h)
