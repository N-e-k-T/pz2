cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Исполняемый файл main
add_executable(main main.cpp)

# Файл для тестов (библиотека)
add_library(testlib add.cpp subtract.cpp)

# Исполняемый файл test (для тестовв)
add_executable(test test.cpp)
target_link_libraries(test testlib)