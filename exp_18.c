#include <reg51.h>

void UART_Init() {
    TMOD = 0x20;  // Timer 1, Mode 2 (8-bit auto-reload)
    TH1 = 0xFD;   // Load value for 9600 baud rate (11.0592 MHz crystal)
    SCON = 0x50;  // Serial mode 1, 8-bit data, 1 stop bit, REN enabled
    TR1 = 1;      // Start Timer 1
}

void UART_SendChar(char c) {
    SBUF = c;         // Load character into serial buffer
    while (TI == 0);  // Wait until transmission complete
    TI = 0;           // Clear transmit interrupt flag
}

void UART_SendString(char *str) {
    while (*str) {
        UART_SendChar(*str++);  // Send each character in the string
    }
}

void main() {
    UART_Init();                   // Initialize UART
    UART_SendString("Hello, World!"); // Send "Hello, World!" over UART

    while (1);  // Infinite loop to hold execution
}
