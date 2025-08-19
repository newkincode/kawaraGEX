cmake_minimum_required(VERSION 4.0.2)

project(kawaraGEX LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_PREFIX_PATH "${CMAKE_SOURCE_DIR}/lib" CACHE PATH "Extra prefix for CMake packages")

add_library(kawaraGEX SHARED
        src/core/Engine.cpp
        src/core/Object.cpp
        src/core/attachments/Transform.cpp
        src/scene/Scene.cpp
        src/scene/GameObject.cpp
        include/GEX/GEX.h
)

target_link_directories(kawaraGEX PRIVATE ${CMAKE_SOURCE_DIR}/lib)
target_include_directories(kawaraGEX
        PUBLIC ${CMAKE_SOURCE_DIR}/include/GEX
        PRIVATE ${CMAKE_SOURCE_DIR}/include/SDL3
)
target_link_libraries(kawaraGEX PRIVATE
        ${CMAKE_SOURCE_DIR}/lib/SDL3-static.lib
        winmm
        setupapi
        cfgmgr32
        version
        imm32
)