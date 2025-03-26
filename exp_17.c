#include <reg51.h>

// Function to sort an array using Bubble Sort
void bubble_sort(unsigned char arr[], unsigned char size) {
    unsigned char i, j, temp;
    
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void main() {
    unsigned char arr[] = {9, 4, 7, 1, 3, 6};  // Array to be sorted
    unsigned char size = sizeof(arr) / sizeof(arr[0]);
    unsigned char i;

    // Call sorting function
    bubble_sort(arr, size);

    // Display the sorted array elements on Port P0 (one by one)
    for (i = 0; i < size; i++) {  
        P0 = arr[i]; // Send each sorted element to Port P0
    }

    while (1);  // Infinite loop to hold execution
}
