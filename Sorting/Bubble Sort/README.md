# Bubble Sort

Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted. The algorithm gets its name because smaller elements "bubble" to the top of the list.

## How Bubble Sort Works

1. **Start at the beginning of the list.**
2. **Compare the first two elements.**
    - If the first element is greater than the second, swap them.
    - If the first element is less than or equal to the second, do nothing.
3. **Move to the next pair of elements and repeat step 2.**
4. **Continue this process until the end of the list is reached.**
5. **Repeat steps 1-4 for the entire list until no swaps are needed.**

## Example

Consider the following list: `[5, 3, 8, 4, 2]`

1. **First Pass:**
    - Compare 5 and 3, swap: `[3, 5, 8, 4, 2]`
    - Compare 5 and 8, no swap: `[3, 5, 8, 4, 2]`
    - Compare 8 and 4, swap: `[3, 5, 4, 8, 2]`
    - Compare 8 and 2, swap: `[3, 5, 4, 2, 8]`

2. **Second Pass:**
    - Compare 3 and 5, no swap: `[3, 5, 4, 2, 8]`
    - Compare 5 and 4, swap: `[3, 4, 5, 2, 8]`
    - Compare 5 and 2, swap: `[3, 4, 2, 5, 8]`
    - Compare 5 and 8, no swap: `[3, 4, 2, 5, 8]`

3. **Third Pass:**
    - Compare 3 and 4, no swap: `[3, 4, 2, 5, 8]`
    - Compare 4 and 2, swap: `[3, 2, 4, 5, 8]`
    - Compare 4 and 5, no swap: `[3, 2, 4, 5, 8]`
    - Compare 5 and 8, no swap: `[3, 2, 4, 5, 8]`

4. **Fourth Pass:**
    - Compare 3 and 2, swap: `[2, 3, 4, 5, 8]`
    - Compare 3 and 4, no swap: `[2, 3, 4, 5, 8]`
    - Compare 4 and 5, no swap: `[2, 3, 4, 5, 8]`
    - Compare 5 and 8, no swap: `[2, 3, 4, 5, 8]`

The list is now sorted: `[2, 3, 4, 5, 8]`

## Pseudocode

```
procedure bubbleSort(A: list of sortable items)
     n = length(A)
     repeat
          swapped = false
          for i = 1 to n-1 inclusive do
                if A[i-1] > A[i] then
                     swap(A[i-1], A[i])
                     swapped = true
                end if
          end for
     until not swapped
end procedure
```

## Time and Space Complexity

### Time Complexity

- **Best Case:** O(n) - when the list is already sorted.
- **Average Case:** O(n^2)
- **Worst Case:** O(n^2)

Bubble Sort is not suitable for large datasets as its average and worst-case time complexity is quite high.

### Space Complexity

- **Space Complexity:** O(1) - Bubble Sort only requires a constant amount of additional space for the swapped variable and the temporary variable used for swapping.

Bubble Sort is a straightforward algorithm to implement and understand, making it a good choice for educational purposes.
