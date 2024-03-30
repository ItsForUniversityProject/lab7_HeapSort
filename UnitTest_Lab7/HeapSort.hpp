#ifndef HEAPSORT_H
#define HEAPSORT_H

#include <vector>

// Функция для преобразования поддерева с корнем i в кучу
void heapify(std::vector<int>& arr, int n, int i);

// Функция для сортировки массива с использованием кучи
void heapSort(std::vector<int>& arr);

#endif // HEAPSORT_H