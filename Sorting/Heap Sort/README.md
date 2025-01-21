# Heap Sort

## Introduction
Heap Sort is a comparison-based sorting algorithm that uses a binary heap data structure. It is an in-place sorting algorithm that is not stable. Heap Sort can be thought of as an improved selection sort that uses the heap data structure rather than a linear-time search to find the maximum or minimum element.

## How It Works
Heap Sort works by first building a max heap from the input data. The largest element is then moved to the end of the array. The heap is then rebuilt, and the process is repeated for the remaining elements. This ensures that the array is sorted in ascending order.

## Example
Consider the array: `[4, 10, 3, 5, 1]`

1. Build a max heap: `[10, 5, 3, 4, 1]`
2. Swap the first element with the last element: `[1, 5, 3, 4, 10]`
3. Rebuild the heap: `[5, 4, 3, 1, 10]`
4. Repeat the process until the array is sorted: `[1, 3, 4, 5, 10]`

## Pseudo Code
```
function heapSort(array):
    n = length(array)
    
    // Build a max heap
    for i = n / 2 - 1 to 0:
        heapify(array, n, i)
    
    // Extract elements from heap one by one
    for i = n - 1 to 0:
        swap(array[0], array[i])
        heapify(array, i, 0)

function heapify(array, n, i):
    largest = i
    left = 2 * i + 1
    right = 2 * i + 2
    
    if left < n and array[left] > array[largest]:
        largest = left
    
    if right < n and array[right] > array[largest]:
        largest = right
    
    if largest != i:
        swap(array[i], array[largest])
        heapify(array, n, largest)
```

## Time and Space Complexity
- **Time Complexity**: 
  - Best Case: O(n log n)
  - Average Case: O(n log n)
  - Worst Case: O(n log n)
- **Space Complexity**: O(1) (in-place sorting)

## Conclusion
Heap Sort is an efficient and reliable sorting algorithm suitable for large datasets. Its consistent O(n log n) time complexity makes it a good choice for performance-critical applications. However, it is not a stable sort, which means it does not preserve the relative order of equal elements.