#include <reg51.h>
void main() {
 unsigned char A[2][2] = {{1, 2}, {3, 4}};
 unsigned char T[2][2];
 unsigned char i, j;
 for (i = 0; i < 2; i++) {
 for (j = 0; j < 2; j++) {
 T[j][i] = A[i][j];
 }
 }
 }