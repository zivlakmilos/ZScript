cmake_minimum_required(VERSION 2.6.0)
project(zscript)

include_directories(include/)

set(SOURCES
    src/parser.c
)

add_executable(${PROJECT_NAME} src/main.c ${SOURCES})
