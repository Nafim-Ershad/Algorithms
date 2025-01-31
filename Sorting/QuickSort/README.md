# QuickSort Algorithm

## Introduction
QuickSort is a highly efficient sorting algorithm and is based on the divide-and-conquer approach. It works by selecting a 'pivot' element from the array and partitioning the other elements into two sub-arrays, according to whether they are less than or greater than the pivot. The sub-arrays are then sorted recursively.

## How QuickSort Works
1. **Choose a Pivot**: Pick an element from the array, this element is called the pivot.
2. **Partitioning**: Rearrange the array so that all elements with values less than the pivot come before the pivot, and all elements with values greater than the pivot come after it. After partitioning, the pivot is in its final position.
3. **Recursively Apply**: Recursively apply the above steps to the sub-array of elements with smaller values and the sub-array of elements with greater values.

## Pseudo Code
```
function quicksort(arr, low, high) {
    if (low < high) {
        // pi is partitioning index, arr[pi] is now at right place
        pi = partition(arr, low, high);

        quicksort(arr, low, pi - 1);  // Before pi
        quicksort(arr, pi + 1, high); // After pi
    }
}

function partition(arr, low, high) {
    pivot = arr[high]; // pivot
    i = (low - 1); // Index of smaller element

    for (j = low; j <= high - 1; j++) {
        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot) {
            i++; // increment index of smaller element
            swap arr[i] with arr[j];
        }
    }
    swap arr[i + 1] with arr[high]);
    return (i + 1);
}
```

## Space and Time Complexity
- **Time Complexity**:
  - Best Case: O(n log n)
  - Average Case: O(n log n)
  - Worst Case: O(n^2)
- **Space Complexity**: O(log n)

## Conclusion
QuickSort is one of the most efficient sorting algorithms, especially for large datasets. Its average-case time complexity is O(n log n), making it suitable for most practical applications. However, its worst-case time complexity is O(n^2), which can be mitigated by using randomized versions of QuickSort.
