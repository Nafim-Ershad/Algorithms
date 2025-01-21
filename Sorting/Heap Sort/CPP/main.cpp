#include <iostream>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

template <size_t N>
void heapSort(){
    
}


int main()
{
    int arr[10] = {12, 11, 13, 5, 6, 7, 1, 9, 10, 4};


    std::cout << "Sorted Array: ";
    for(int i = 0; i < 10; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    return 0;
}