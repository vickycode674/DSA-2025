#include <iostream>

// Function to find the nth Fibonacci number
int fib(int n) {
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

// Function to check if 'x' is a Fibonacci number
bool isFibonacci(int x, int n = 1) {
    // Generate the nth Fibonacci number
    int fibN = fib(n);

    // If fibN is equal to x, x is a Fibonacci number
    if (fibN == x)
        return true;

    // If fibN is greater than x, x is not a Fibonacci number
    if (fibN > x)
        return false;

    // Otherwise, check the next Fibonacci number
    return isFibonacci(x, n + 1);
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
