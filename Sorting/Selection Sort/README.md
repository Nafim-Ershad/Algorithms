# Selection Sort

Selection Sort is a simple comparison-based sorting algorithm. It works by dividing the input list into two parts: the sublist of items already sorted, which is built up from left to right at the front (left) of the list, and the sublist of items remaining to be sorted that occupy the rest of the list. Initially, the sorted sublist is empty, and the unsorted sublist is the entire input list. The algorithm proceeds by finding the smallest (or largest, depending on the sorting order) element in the unsorted sublist, exchanging (swapping) it with the leftmost unsorted element (putting it in sorted order), and moving the sublist boundaries one element to the right.

## How It Works

1. Start with the first element as the minimum.
2. Compare this minimum with the second element. If the second element is smaller, update the minimum.
3. Continue this process for the entire array.
4. After completing one pass, swap the minimum element with the first element of the array.
5. Move the boundary of the sorted sublist one element to the right.
6. Repeat the process for the remaining unsorted elements.

## Example

Consider the array: `[64, 25, 12, 22, 11]`

1. Find the minimum element in the array `[64, 25, 12, 22, 11]` which is `11`, and swap it with the first element. The array becomes `[11, 25, 12, 22, 64]`.
2. Find the minimum element in the remaining array `[25, 12, 22, 64]` which is `12`, and swap it with the second element. The array becomes `[11, 12, 25, 22, 64]`.
3. Find the minimum element in the remaining array `[25, 22, 64]` which is `22`, and swap it with the third element. The array becomes `[11, 12, 22, 25, 64]`.
4. Find the minimum element in the remaining array `[25, 64]` which is `25`, and swap it with the fourth element. The array becomes `[11, 12, 22, 25, 64]`.
5. The array is now sorted.

## Pseudocode

```
SELECTION-SORT(A)
1. for i = 0 to length(A) - 1
2.     minIndex = i
3.     for j = i + 1 to length(A)
4.         if A[j] < A[minIndex]
5.             minIndex = j
6.     if minIndex != i
7.         swap A[i] with A[minIndex]
```

## Time Complexity

- Best Case: O(n^2)
- Average Case: O(n^2)
- Worst Case: O(n^2)

## Space Complexity

- O(1) (in-place sorting)

## Conclusion

Selection Sort is an intuitive and easy-to-implement sorting algorithm suitable for small datasets. However, due to its O(n^2) time complexity, it is inefficient for large datasets compared to more advanced algorithms like Quick Sort or Merge Sort. Despite its simplicity, Selection Sort is a useful educational tool for understanding the basic concepts of sorting algorithms and in-place sorting.