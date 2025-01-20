#include <iostream>
#include <string>

/**
 * @brief Sorts an array using the bubble sort algorithm.
 * 
 * This function sorts an array of integers in ascending order using the bubble sort algorithm.
 * The function takes a reference to an array of integers with a fixed size, specified by the template parameter N.
 * 
 * @tparam N The size of the array to be sorted.
 * @param arr A reference to the array of integers to be sorted.
 * 
 * @note The template parameter N is used to specify the size of the array at compile time. 
 * This allows the function to work with arrays of different sizes without needing to pass the size as a separate argument.
 * 
 * @warning The function assumes that the array has at least two elements. If the array has fewer than two elements, 
 * accessing arr[i+1] will result in undefined behavior.
 */

// Since arrays are passed by reference, their size are considered same as int.
// To get a size, we use the the following template as params
template <size_t N>

void bubbleSort(int (&arr)[N])
{
    for(int j = 0; j < N - 1; j++)
    {
        for(int i = 0; i < N - j; i++)
        {
            if(arr[i] > arr[i+1])
            {
                int temp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main()
{
    int arr[10] = {2, 0, 1, 4, 3, 6, 5, 9, 8, 7};

    bubbleSort(arr);

    for(int j=0; j<10; j++)
    {
        std::cout << arr[j] << std::endl;
    }

    return 0;
}