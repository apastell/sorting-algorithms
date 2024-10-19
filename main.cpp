#include <iostream>
#include <vector>
#include "bubble_sort.h"
// #include "merge_sort.h"
// #include "selection_sort.h"
// #include "heap_sort.h"
// #include "quick_sort.h"

// Function to print the array
void printArray(const std::vector<int>& arr) {
    for (int val : arr) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> arr;
    int numElements;

    // Taking array input from the user
    std::cout << "Enter the number of elements: ";
    std::cin >> numElements;

    std::cout << "Enter the elements: ";
    for (int i = 0; i < numElements; ++i) {
        int value;
        std::cin >> value;
        arr.push_back(value);
    }

    std::cout << "Original Array: ";
    printArray(arr);

    // Use Bubble Sort and print after each iteration
    std::cout << "Sorting with Bubble Sort...\n";
    bubbleSort(arr);
    std::cout << "Final sorted array: ";
    printArray(arr);

    return 0;
}