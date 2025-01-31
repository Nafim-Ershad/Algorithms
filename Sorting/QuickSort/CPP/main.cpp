#include <iostream>

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

    for(int j = low; j < high; j++)
    {
        // If current element is smaller than or equal to pivot
        if(arr[j] <= pivot)
        {
            i++; // Increment index of smaller element
            swap(&arr[i], &arr[j]); // Swap the elements
        }
    }

    swap(&arr[i+1], &arr[high]); // Swap the pivot element with the element at i+1

    return i+1; // Return the partitioning index
}

// Function to implement QuickSort
void quickSort(int* arr, int low, int high)
{
    if(low < high){
        // Partition the array
        int p = partition(arr, low, high);

        // Recursively sort elements before and after partition
        quickSort(arr, low, p-1);
        quickSort(arr, p+1, high);
    }
}

int main(int argc, char* argv[])
{
    int arr[] = {10, 7, 8, 9, 1, 5}; // Array to be sorted
    int n = sizeof(arr) / sizeof(arr[0]); // Size of the array

    quickSort(arr, 0, n-1); // Call QuickSort

    std::cout << "Array elements are: \n";
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " "; // Print sorted array
    }
    std::cout << std::endl;
    return 0;
}