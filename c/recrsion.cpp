#include <iostream>

int multiply(int a, int b) {
    // Base case: if one of the numbers is 0, the result is 0
    if (a == 0 || b == 0) {
        return 0;
    } else {
        // Recursive case: multiply a by b-1 and add a to the result
        return a + multiply(a, b - 1);
    }
}

int main() {
    // Example usage:
    int result = multiply(5, 3);
    std::cout << "Result: " << result << std::endl; // Output: 15

    return 0;
}