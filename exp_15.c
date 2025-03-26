#include <reg51.h>

// Function to calculate GCD using the Euclidean algorithm
unsigned int gcd(unsigned int a, unsigned int b) {
    while (b != 0) {
        unsigned int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void main() {
    unsigned int num1 = 48, num2 = 18; // Change values as needed
    unsigned int result;

    result = gcd(num1, num2); // Compute GCD

    P0 = result; // Store result in Port P0

    while (1); // Infinite loop to hold execution
}
