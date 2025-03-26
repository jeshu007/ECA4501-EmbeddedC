#include <reg51.h>

void main() {
    unsigned char array[5] = {25, 78, 12, 90, 34};
    unsigned char i, largest, smallest;
    
    largest = smallest = array[0];
    
    for (i = 1; i < 5; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
        if (array[i] < smallest) {
            smallest = array[i];
        }
    }
    
    P1 = largest;  // Output largest number to Port 1
    P2 = smallest; // Output smallest number to Port 2
    
    while (1);
}