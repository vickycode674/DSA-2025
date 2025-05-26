#include <iostream>
#include <cmath>

// Function to check if a number is a perfect square
bool isPerfectSquare(int n) {
    int root = sqrt(n);
    return n == root * root;
}

// Function to check if a number is a Fibonacci number
bool isFibonacci(int n) {
    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (isFibonacci(number))
        std::cout << number << " is a Fibonacci number." << std::endl;
    else
        std::cout << number << " is not a Fibonacci number." << std::endl;

    return 0;
}
