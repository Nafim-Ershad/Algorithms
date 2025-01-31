#include <stdio.h>
#include <stdbool.h>

// Function to swap two elements
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to partition the array on the basis of pivot element
int partition(int* arr, int low, int high)
{
    int pivot = arr[high]; // Pivot element
    int i = low - 1; // Index of smaller element

    for(int j = low; j < high; j++) // Traverse through all elements
    {
        if(arr[j] <= pivot) // If current element is smaller than or equal to pivot
        {
            i++; // Increment index of smaller element
            swap(&arr[j], &arr[i]); // Swap current element with the element at index i
        }
    }

    swap(&arr[i+1], &arr[high]); // Swap the pivot element with the element at index i+1

    return i+1; // Return the partitioning index
}

// Function to implement QuickSort
void quickSort(int* arr, int low, int high)
{
    if(low < high) // Base condition
    {
        int p = partition(arr, low, high); // Partition the array

        quickSort(arr, low, p-1); // Recursively sort elements before partition
        quickSort(arr, p+1, high); // Recursively sort elements after partition
    }
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5}; // Array to be sorted
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    quickSort(arr, 0, n-1); // Call QuickSort

    printf("Sorted array: \n"); // Print the sorted array
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}