#include "bubble_sort.h"
#include <iostream>

// Bubble Sort Implementation
// Time Complexity: O(n^2)
void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // Print the array after each iteration
        std::cout << "Array after iteration " << i + 1 << ": ";
        for (int val : arr) {
            std::cout << val << " ";
        }
        std::cout << std::endl;

        // If no two elements were swapped in the inner loop, the array is already sorted
        if (!swapped) break;
    }
}