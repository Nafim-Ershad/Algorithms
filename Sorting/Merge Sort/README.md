# Merge Sort

## What is Merge Sort?

Merge Sort is a divide-and-conquer algorithm that splits an array into smaller subarrays, sorts each subarray, and then merges them back together to form a sorted array. It is known for its efficiency and stability.

## How Merge Sort Works

1. **Divide**: Split the array into two halves.
2. **Conquer**: Recursively sort each half.
3. **Combine**: Merge the two sorted halves into a single sorted array.

## Pseudocode

```
function mergeSort(array):
    if length of array <= 1:
        return array

    mid = length of array / 2
    leftHalf = array[0:mid]
    rightHalf = array[mid:length of array]

    leftSorted = mergeSort(leftHalf)
    rightSorted = mergeSort(rightHalf)

    return merge(leftSorted, rightSorted)

function merge(left, right):
    result = []
    while left is not empty and right is not empty:
        if left[0] <= right[0]:
            append left[0] to result
            remove left[0] from left
        else:
            append right[0] to result
            remove right[0] from right

    while left is not empty:
        append left[0] to result
        remove left[0] from left

    while right is not empty:
        append right[0] to result
        remove right[0] from right

    return result
```

## Time and Space Complexity

- **Time Complexity**: O(n log n) in all cases (worst, average, and best).
- **Space Complexity**: O(n) due to the additional space required for the temporary arrays.

## Conclusion

Merge Sort is a highly efficient and stable sorting algorithm suitable for large datasets. Its consistent O(n log n) time complexity makes it a reliable choice for various applications.