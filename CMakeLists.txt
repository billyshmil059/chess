cmake_minimum_required(VERSION 3.28.1)
project(chess)

set(CMAKE_CXX_STANDARD 17)

add_executable(chess main.cpp
        Figure.h
        Game.h
        Pawn.h
        Rock.h
        Horse.h
        Queen.h
        King.h
        Bishop.h
        Pawn.cpp
        Rock.cpp
        Queen.cpp
        King.cpp
        Horse.cpp
        Bishop.cpp
        Game.cpp
        Game.cpp
        check.cpp)
