#include <stdio.h>

void swap(int* first, int* second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}

// Function to perform bubble sort on an array
void bubbleSort(int* arr, int N) {
    for(int j = 0; j < N - 1; j++)
    {
        for(int i = 0; i < N - j; i++)
        {
            if(arr[i] > arr[i+1])
            {
                swap(&arr[i], &arr[i+1]);
            }
        }
    }
}

int main() {
    int arr[10] = {2, 0, 1, 4, 3, 6, 5, 9, 8, 7};

    bubbleSort(arr, sizeof(arr) / sizeof(arr[0]));

    for (int j = 0; j < 10; j++) {
        printf("%d\n", arr[j]);
    }

    return 0;
}