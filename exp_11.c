#include <reg51.h>

void main() {
    unsigned char hex_value = 0xCF;  // Hexadecimal value to convert (207 decimal)
    unsigned char hundreds, tens, units;
    
    // Convert to decimal
    hundreds = hex_value / 100;  // Extract hundreds place
    hex_value = hex_value % 100; // Remaining value after extracting hundreds
    tens = hex_value / 10;       // Extract tens place
    units = hex_value % 10;      // Extract units place

    // Display on Ports
    P0 = hundreds;  // Hundreds place (2)
    P1 = tens;      // Tens place (0)
    P2 = units;     // Units place (7)

    while (1);  // Infinite loop to keep values displayed
}
