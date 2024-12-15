cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Исполняемый файл main
add_executable(main main.cpp)

# Исполняемый файл test (для тестов)
add_executable(test test.cpp)

# Добавляем main.cpp к test, чтобы он видел функцию add
target_sources(test PRIVATE main.cpp)