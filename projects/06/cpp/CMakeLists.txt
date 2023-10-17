cmake_minimum_required(VERSION 3.10)

project(Assembler)

# bin 
set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
# src
aux_source_directory(src SRC_DIRC)
# include 
include_directories(include)

# exec
add_executable(assembler ${SRC_DIRC})


