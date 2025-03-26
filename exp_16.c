#include <reg51.h>

// Function to merge two arrays
void merge_arrays(unsigned char arr1[], unsigned char size1, unsigned char arr2[], unsigned char size2, unsigned char merged[]) {
    unsigned char i, j;
    
    // Copy arr1 elements to merged array
    for (i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }

    // Copy arr2 elements to merged array
    for (j = 0; j < size2; j++) {
        merged[size1 + j] = arr2[j];
    }
}

void main() {
    unsigned char arr1[] = {1, 3, 5, 7};
    unsigned char arr2[] = {2, 4, 6, 8};
    unsigned char size1 = sizeof(arr1) / sizeof(arr1[0]);
    unsigned char size2 = sizeof(arr2) / sizeof(arr2[0]);
    unsigned char merged[8];  // Array to store merged result
    unsigned char i;  // Declare i before using it in the loop

    // Call merge function
    merge_arrays(arr1, size1, arr2, size2, merged);

    // Display the merged array elements on Port P0 (one by one)
    for (i = 0; i < (size1 + size2); i++) {  
        P0 = merged[i]; // Send each element to Port P0
    }

    while (1);  // Infinite loop to keep execution running
}
