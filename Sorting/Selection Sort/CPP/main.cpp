#include <iostream>
/**
 * @brief Swaps the values of two integers.
 * 
 * @param a Pointer to the first integer.
 * @param b Pointer to the second integer.
 */

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * @brief Sorts an array using the selection sort algorithm.
 * 
 * @tparam N Size of the array.
 * @param arr Reference to the array to be sorted.
 */
template <size_t N>
void selectionSort(int (&arr)[N]){
    for (int i = 0; i < N; i++)
    {
        int minIndex = i; // Assume the current index is the minimum
        for (int j = i + 1; j < N; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j; // Update minIndex if a smaller element is found
            }
        }
        if(minIndex != i)
        {
            swap(&arr[i], &arr[minIndex]); // Swap the found minimum element with the current element
        }
    }
}

/**
 * @brief Main function to demonstrate the selection sort algorithm.
 * 
 * Initializes an array, sorts it using selectionSort, and prints the sorted array.
 * 
 * @return int Exit status of the program.
 */
int main(){
    int arr[10] = {29, 10, 14, 37, 13, 25, 33, 19, 42, 17};

    selectionSort(arr);

    for(int i = 0; i < 10; i++) {
        std::cout << arr[i] << " - ";
    }
    std::cout << std::endl;

    return 0;
}