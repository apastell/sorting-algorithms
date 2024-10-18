#ifndef SORT_H
#define SORT_H

#include <vector>

// Function prototypes for the sorting algorithms
void bubbleSort(std::vector<int>& arr);
void mergeSort(std::vector<int>& arr, int left, int right);
void selectionSort(std::vector<int>& arr);
void heapSort(std::vector<int>& arr);
void quickSort(std::vector<int>& arr, int low, int high);

#endif