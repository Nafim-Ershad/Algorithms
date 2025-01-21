#include <iostream>

// Function to perform insertion sort on an array
template <size_t N>
void insertionSort(int (&arr)[N]) {
    // Loop through each element in the array starting from the second element
    for (int i = 1; i < N; i++) {
        int key = arr[i]; // Store the current element as key
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; // Place the key in its correct position
    }
}

int main() {
    // Initialize an array of integers
    int arr[10] = {9, 8, 6, 7, 5, 3, 2, 0, 1, 4};
    // Call insertionSort to sort the array
    insertionSort(arr);

    // Print the sorted array
    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << ", ";
    }

    return 0;
}