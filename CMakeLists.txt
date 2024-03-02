cmake_minimum_required(VERSION 3.27)
project(bj_posn2_2024)

set(CMAKE_CXX_STANDARD 14)

add_executable(bj_posn2_2024
        basic/basic-1.cpp
        class/class-1.cpp
        class/pass-by-value-vs-reference.cpp
        stl/pair/pair-1.cpp
        stl/priority-queue/pq-1.cpp
        stl/priority-queue/pq-2.cpp
        stl/priority-queue/pq-3.cpp
        stl/queue/queue-1.cpp
        stl/stack/stack-1.cpp
        stl/vector/vector-1.cpp
        stl/vector/vector-2.cpp
        stl/vector/vector-3.cpp
        stl/map/map-1.cpp)
