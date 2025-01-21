# Insertion Sort

## What is Insertion Sort?

Insertion Sort is a simple and intuitive comparison-based sorting algorithm. It builds the final sorted array one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort. However, it has the advantage of being simple to implement and efficient for small data sets or nearly sorted data.

## How Insertion Sort Works

1. **Start with the first element**: Assume the first element is already sorted.
2. **Pick the next element**: Move to the next element in the list.
3. **Compare and shift**: Compare the picked element with the elements in the sorted part of the list. Shift all the elements in the sorted part that are greater than the picked element to the right.
4. **Insert the picked element**: Insert the picked element into its correct position in the sorted part of the list.
5. **Repeat**: Repeat steps 2-4 until all elements are sorted.

### Example

Consider the array: `[5, 2, 9, 1, 5, 6]`

- Start with the first element `[5]` (already sorted).
- Pick the next element `2`. Compare with `5` and insert `2` before `5`: `[2, 5]`.
- Pick the next element `9`. It is greater than `5`, so no shifting is needed: `[2, 5, 9]`.
- Pick the next element `1`. Compare and shift `2`, `5`, and `9` to the right, then insert `1`: `[1, 2, 5, 9]`.
- Pick the next element `5`. Compare and shift `9` to the right, then insert `5`: `[1, 2, 5, 5, 9]`.
- Pick the next element `6`. Compare and shift `9` to the right, then insert `6`: `[1, 2, 5, 5, 6, 9]`.

The array is now sorted.

### Pseudocode

Here is the pseudocode for the Insertion Sort algorithm:

```
InsertionSort(array)
    for i from 1 to length(array) - 1
        key = array[i]
        j = i - 1
        while j >= 0 and array[j] > key
            array[j + 1] = array[j]
            j = j - 1
        array[j + 1] = key
```

### Time Complexity

- **Best Case**: O(n) - when the array is already sorted.
- **Average Case**: O(n^2) - when the elements are in random order.
- **Worst Case**: O(n^2) - when the array is sorted in reverse order.

### Space Complexity

- **O(1)** - Insertion Sort is an in-place sorting algorithm, meaning it requires only a constant amount of additional memory space.

## Conclusion

Insertion Sort is a straightforward and easy-to-implement sorting algorithm suitable for small or nearly sorted datasets. While it is not the most efficient for large datasets, its simplicity and efficiency for small datasets make it a useful tool in a programmer's toolkit.