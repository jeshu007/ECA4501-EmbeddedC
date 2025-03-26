#include <reg51.h>
void main() {
 unsigned int num = 153; // Example 3-digit number
 unsigned int temp, sum = 0, digit;
 temp = num;
 while (temp > 0) {
 digit = temp % 10;
 sum += (digit * digit * digit);
 temp /= 10;
 }
 if (sum == num) {
 P1 = 0xFF; // Indicate Armstrong number (Set Port 1 HIGH)
 } else {
 P1 = 0x00; // Indicate NOT an Armstrong number (Set Port 1 LOW)
 }
 while (1);
}