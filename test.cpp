#include <iostream>
#include <cassert>

int add(int a, int b); // объявление функции add

int main() {
  // Тест 1: Проверка сложения положительных чисел
    assert(add(2, 3) == 5);
    std::cout << "Test 1 passed: add(2, 3) == 5" << std::endl;

    // Тест 2: Проверка сложения с нулем
    assert(add(5, 0) == 5);
    std::cout << "Test 2 passed: add(5, 0) == 5" << std::endl;

    // Тест 3: Проверка сложения отрицательных чисел
    assert(add(-2, -3) == -5);
    std::cout << "Test 3 passed: add(-2, -3) == -5" << std::endl;
        
    std::cout << "All tests passed!" << std::endl;

    return 0;
}