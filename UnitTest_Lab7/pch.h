// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.

#ifndef PCH_H
#define PCH_H

#include <vector>

// Функция для преобразования поддерева с корнем i в кучу
void heapify(std::vector<int>& arr, int n, int i);

// Функция для сортировки массива с использованием кучи
void heapSort(std::vector<int>& arr);

// add headers that you want to pre-compile here

#endif //PCH_H
