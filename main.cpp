#include <iostream>

/**
 * @brief Adds two integers.
 *
 * This function takes two integer arguments and returns their sum.
 *
 * @param a The first integer.
 * @param b The second integer.
 * @return The sum of a and b.
 */
int add(int a, int b) {
    return a + b;
}

/**
 * @brief Main function of the program.
 *
 * This function demonstrates the usage of the add function and prints the result to the console.
 *
 * @return 0 if the program executes successfully.
 */
int main() {
    int result = add(5, 3);
    std::cout << "5 + 3 = " << result << std::endl;
    return 0;
}