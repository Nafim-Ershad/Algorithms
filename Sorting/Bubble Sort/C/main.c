#include <stdio.h>

// Function to swap two integers
void swap(int* first, int* second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}

// Function to perform bubble sort on an array
void bubbleSort(int* arr, int N) {
    // Loop through each element in the array
    for (int j = 0; j < N - 1; j++) {
        // Inner loop to compare array elements
        for (int i = 0; i < N - j - 1; i++) {
            // Swap if the current element is greater than the next element
            if (arr[i] > arr[i + 1]) {
                swap(&arr[i], &arr[i + 1]);
            }
        }
    }
}

int main() {
    // Initialize an array of integers
    int arr[10] = {2, 0, 1, 4, 3, 6, 5, 9, 8, 7};
    // Calculate the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call bubbleSort to sort the array
    bubbleSort(arr, n);

    // Print the sorted array
    for (int j = 0; j < n; j++) {
        printf("%d\n", arr[j]);
    }

    return 0;
}