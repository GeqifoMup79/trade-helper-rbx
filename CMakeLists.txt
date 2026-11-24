cmake_minimum_required(VERSION 3.16)
project(trade-helper-rbx CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(tradehelperrbx
    src/main.cpp
    src/valuate.cpp
    src/history.cpp
    src/alerts.cpp
)

target_include_directories(tradehelperrbx PRIVATE include)

if(WIN32)
    target_link_libraries(tradehelperrbx PRIVATE userenv)
endif()
