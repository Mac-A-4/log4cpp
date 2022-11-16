cmake_minimum_required(VERSION 3.10)

project("log4cpp")

file(GLOB_RECURSE "LOG4CPP_SRC" "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

add_library("log4cpp" STATIC ${LOG4CPP_SRC})

target_include_directories("log4cpp" PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
