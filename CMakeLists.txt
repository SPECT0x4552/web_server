cmake_minimum_required(VERSION 3.29)
project(webserver)

set(CMAKE_CXX_STANDARD 20)

add_library(webserver SHARED main.cpp
        Networking/simple_socket.cpp
        Networking/simple_socket.hpp)
