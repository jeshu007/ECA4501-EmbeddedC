#include <reg51.h>
void main() {
 unsigned char arr[5] = {1, 2, 3, 4, 5};
 unsigned char temp, i;
 temp = arr[0];
 for (i = 0; i < 4; i++) {
 arr[i] = arr[i + 1];
 }
 arr[4] = temp;
 while (1);
}
