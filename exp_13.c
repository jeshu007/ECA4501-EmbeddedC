#include <reg51.h>

void main() {
    unsigned char A[2][2] = {{1, 2}, {3, 4}};  // First matrix
    unsigned char B[2][2] = {{5, 6}, {7, 8}};  // Second matrix
    unsigned char C[2][2];                     // Resultant matrix
    unsigned char i, j;
    
    // Perform matrix addition: C[i][j] = A[i][j] + B[i][j]
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display results on Ports
    P0 = (C[0][0] << 4) | (C[0][1] & 0x0F);  // First row (high nibble & low nibble)
    P1 = (C[1][0] << 4) | (C[1][1] & 0x0F);  // Second row (high nibble & low nibble)

    while (1);  // Infinite loop to hold values
}
