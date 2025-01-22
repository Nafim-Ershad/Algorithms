#include <iostream>

void merge(int* arr, int left, int mid, int right)
{
    // Creating 2 array end points
    int n1 = mid - left + 1;
    int n2 = right - mid;
    // Create 2 temp array pointers
    int* leftArray = new int[n1];
    int* rightArray = new int[n2];

    // Populate the new temp arrays
    for(int i=0; i<n1; i++) leftArray[i] = arr[left + i]; // Since the left half should start from left to mid
    for(int j=0; j<n2; j++) rightArray[j] = arr[mid + j + 1]; // Since the starting of right half should be after mid to right

    int i = 0, j = 0; // Left Index, Right Index
    int k = left; // This is used for indexing the main arr[]

    while(i < n1 && j < n2)
    {
        if(leftArray[i] < rightArray[j])
        {
            arr[k] = leftArray[i];
            i++;
        }
        else
        {
            arr[k] = rightArray[j];
            j++;
        }

        k++;
    }

    // Incase i or j gets more than n1 or n2 respectively
    // even though sorting not complete
    while(i < n1)
    {   
        // Since from previouse recursions, the sub-arrays are already sorted
        arr[k] = leftArray[i];
        i++; k++;
    }

    while(j < n2)
    {
        arr[k] = rightArray[j];
        j++; k++;
    }

    // Free temp array memory
    delete[] leftArray;
    delete[] rightArray;
}

/**
 * @brief Sorts an array using the merge sort algorithm.
 * 
 * This function recursively divides the array into two halves, sorts each half,
 * and then merges the sorted halves.
 * 
 * @param arr Pointer to the array to be sorted.
 * @param left The starting index of the array segment to be sorted.
 * @param right The ending index of the array segment to be sorted.
 * 
 * The calculation of mid is done using:
 * int mid = left + (right - left) / 2;
 * This ensures that the midpoint is correctly calculated without overflow.
 * The value of mid is truncated (floored) because integer division in C++ 
 * always truncates towards zero.
 */
void mergeSort(int* arr, int left, int right)
{
    if(left < right)
    {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }

    return; 
}


int main()
{
    int arr[] = {34, 7, 23, 32, 5, 62, 32, 12, 45, 78};
    int size = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, size - 1);

    for(int i = 0; i < size; i++) 
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}