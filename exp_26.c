#include <reg51.h>
void main() {
 unsigned char *mem1 = (unsigned char *) 0x30; // Memory location 0x30
 unsigned char *mem2 = (unsigned char *) 0x31; // Memory location 0x31
 unsigned char temp;
 *mem1 = 0x55; // Example value at 0x30
 *mem2 = 0xAA; // Example value at 0x31
 temp = *mem1;
 *mem1 = *mem2;
 *mem2 = temp;
 while (1);
}