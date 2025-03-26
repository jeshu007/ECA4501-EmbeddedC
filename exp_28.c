#include <reg51.h>
void main() {
 unsigned char arr[6] = {1, 2, 3, 4, 5, 6};
 unsigned char i, sum_even = 0, sum_odd = 0;
 for (i = 0; i < 6; i++) {
 if (arr[i] % 2 == 0)
 sum_even += arr[i];
 else
 sum_odd += arr[i];
 }
 while (1);
}