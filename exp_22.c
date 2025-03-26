#include <reg51.h>
void main() {
 unsigned char num = 5; // Change this number as needed
 unsigned char i;
 unsigned char table[10]; // Store multiplication table in internal RAM
 for (i = 0; i < 10; i++) {
 table[i] = num * (i + 1); // Store results in table array
 }
 while (1);
}