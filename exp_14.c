#include <reg51.h>
void main() {
 char str[] = "madam";
 unsigned char i, len = 0, flag = 1;
 while (str[len] != '\0') {
 len++;
 }
 for (i = 0; i < len / 2; i++) {
 if (str[i] != str[len - 1 - i]) {
 flag = 0;
 break;
 }
 }
 while (1);
}