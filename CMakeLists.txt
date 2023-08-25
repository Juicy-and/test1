cmake_minimum_required(VERSION 3.20)
project(MyProject)
add_executable(MyProject main.cpp "testHeader.h")

add_subdirectory(../../Catch2 Catch2-build)
add_executable(MyProjectTest test-main.cpp  "testHeader.h")
target_link_libraries(MyProjectTest PRIVATE Catch2::Catch2)