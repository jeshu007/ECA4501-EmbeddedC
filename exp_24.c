#include <reg51.h>
void main() {
 unsigned int num = 1234; // Example 16-bit number
 unsigned int rev = 0;

 while (num > 0) {
 rev = (rev * 10) + (num % 10);
 num /= 10;
 }
 while (1);
}