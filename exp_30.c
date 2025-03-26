#include <reg51.h>
void main() {
 unsigned int num = 13; // Example decimal number
 unsigned char binary[16];
 unsigned char i = 0;
 while (num > 0) {
 binary[i++] = num % 2;
 num /= 2;
 }
 while (1);
}