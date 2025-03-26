#include <reg51.h>

void main() {
    unsigned char num1, num2, i, ones = 0, zeros = 0;
    unsigned int combined;

    num1 = 0x5A;  // Example value in first memory location (01011010)
    num2 = 0xC3;  // Example value in second memory location (11000011)

    combined = (num1 << 8) | num2; // Combine both into a 16-bit number

    for (i = 0; i < 16; i++) {
        if (combined & (1 << i))
            ones++;
        else
            zeros++;
    }

    P0 = ones;  // Output number of ones to Port 0
    P1 = zeros; // Output number of zeros to Port 1

    while (1);
}
