#include <reg51.h>
// Define LCD control pins
sbit RS = P2^0; // Register Select
sbit RW = P2^1; // Read/Write
sbit EN = P2^2; // Enable
// Function prototypes
void delay(unsigned int);
void lcd_command(unsigned char);
void lcd_data(unsigned char);
void lcd_init();
void lcd_string(char *str);
void main() {
 lcd_init(); // Initialize LCD

 lcd_string("HELLO WORLD"); // Display "HELLO WORLD"

 while (1); // Infinite loop
}
// Function to generate delay
void delay(unsigned int time) {
 unsigned int i, j;
 for (i = 0; i < time; i++)
 for (j = 0; j < 1275; j++); // Adjust delay as needed
}
// Function to send command to LCD
void lcd_command(unsigned char cmd) {
 P1 = cmd; // Send command to data port
 RS = 0; // Command mode
 RW = 0; // Write mode
 EN = 1;
 delay(2);
 EN = 0;
}
// Function to send data to LCD
void lcd_data(unsigned char dat) { // Corrected parameter name
 P1 = dat; // Send data to data port
 RS = 1; // Data mode
 RW = 0; // Write mode
 EN = 1;
 delay(2);
 EN = 0;
}
// Function to initialize LCD
void lcd_init() {
 lcd_command(0x38); // 2-line, 5x7 matrix
 delay(5);
 lcd_command(0x0C); // Display ON, Cursor OFF
 delay(5);
 lcd_command(0x06); // Increment cursor
 delay(5);
 lcd_command(0x01); // Clear display
 delay(10);
}
// Function to send a string to LCD
void lcd_string(char *str) {
 while (*str) {
 lcd_data(*str);
 str++;
 }
}