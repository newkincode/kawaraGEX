cmake_minimum_required(VERSION 4.0.2)

project(kawaraGEX LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(SDL3 REQUIRED)

target_include_directories(kawaraGEX PRIVATE
        ${CMAKE_SOURCE_DIR}/include
)

target_link_directories(kawaraGEX PRIVATE
        ${CMAKE_SOURCE_DIR}/lib
)

add_library(
        src/core/Engine.cpp
)