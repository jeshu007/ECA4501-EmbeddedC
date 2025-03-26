#include <reg51.h>

void main() {
    signed char array[] = { -5, 12, -8, 0, 45, -1, 78, -32 }; // Example numbers
    unsigned char i, negative_count = 0;

    for (i = 0; i < 8; i++) {
        if (array[i] < 0) { // Check if the number is negative
            negative_count++;
        }
    }

    P0 = negative_count; // Output count of negative numbers to Port 0

    while (1);
}
