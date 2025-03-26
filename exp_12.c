#include <reg51.h>

void delay() {
    unsigned int i;
    for (i = 0; i < 30000; i++);  // Simple delay loop
}

void main() {
    unsigned char a = 0, b = 1, c;
    unsigned char i;
    
    P0 = a;  // Display first Fibonacci number
    delay();
    P1 = b;  // Display second Fibonacci number
    delay();

    for (i = 2; i < 10; i++) {  // Generate next 8 Fibonacci numbers
        c = a + b;  // Fibonacci formula
        P2 = c;      // Display on Port P2
        delay();
        
        a = b;  // Update values for next iteration
        b = c;
    }
    
    while (1);  // Infinite loop to hold values
}
