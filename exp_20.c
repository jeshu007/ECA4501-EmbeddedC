#include <reg51.h>
void main() {
 char str[] = "embedded";
 unsigned char i;
 unsigned char xdata freq[256] = {0}; // Use external RAM (xdata)
 for (i = 0; str[i] != '\0'; i++) {
 freq[str[i]]++;
 }
 while (1);
}