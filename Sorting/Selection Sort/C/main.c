#include <stdio.h>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int* arr, int N){
    for(int i = 0; i < N; i++)
    {
        int minIdx = i;
        for(int j = i + 1; j < N; j++)
        {
            if(arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }

        if(minIdx != i)
        {
            swap(&arr[i], &arr[minIdx]);
        }
    }
}

int main()
{
    int arr[10] = {34, 7, 23, 32, 5, 62, 32, 12, 45, 67};

    selectionSort(arr, 10);

    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}