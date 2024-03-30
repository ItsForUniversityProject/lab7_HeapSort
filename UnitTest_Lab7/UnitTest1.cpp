#include "pch.h"
#include "CppUnitTest.h"
#include <vector>
#include "HeapSort.hpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace HeapSortTests
{
    TEST_CLASS(HeapifyTests)
    {
    public:

        TEST_METHOD(TestHeapify)//элементы закладываются в верном порядке
        {
            std::vector<int> arr = { 4, 10, 3, 5, 1 };
            int n = arr.size();
            heapify(arr, n, 0);

            Assert::AreEqual(10, arr[0]);
            Assert::AreEqual(5, arr[1]);
            Assert::AreEqual(3, arr[2]);
            Assert::AreEqual(4, arr[3]);
            Assert::AreEqual(1, arr[4]);
        }
    };

    TEST_CLASS(HeapSortTests)
    {
    public:

        TEST_METHOD(TestHeapSort)//проверка правильности выходного массива
        {
            std::vector<int> arr = { 4, 10, 3, 5, 1 };
            heapSort(arr);

            Assert::AreEqual(1, arr[0]);
            Assert::AreEqual(3, arr[1]);
            Assert::AreEqual(4, arr[2]);
            Assert::AreEqual(5, arr[3]);
            Assert::AreEqual(10, arr[4]);
        }

        TEST_METHOD(TestHeapSortAllEqual)
        {
            std::vector<int> arr = { 5, 5, 5, 5, 5 };
            heapSort(arr);
            std::vector<int> expected = { 5, 5, 5, 5, 5 };
            Assert::IsTrue(arr == expected);
        }

        TEST_METHOD(TestHeapSortMoreThanTen)
        {
            std::vector<int> arr = { 3, 5, 9, 2, 17, 8, 4, 21, 1, 11, 7, 6 };
            heapSort(arr);
            std::vector<int> expected = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 17, 21 };
            Assert::IsTrue(arr == expected);
        }

        TEST_METHOD(TestHeapPartiallySorted)
        {
            std::vector<int> arr = { 1, 2, 3, 4, 5, 9, 17, 8, 21, 11, 7, 6 };
            heapSort(arr);
            std::vector<int> expected = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 17, 21 };
            Assert::IsTrue(arr == expected);
        }

        TEST_METHOD(TestHeapSortMixed)
        {
            std::vector<int> arr = { 3, -2, 5, -1, 0, 9, 17, -8, 21, 11, 7, -6 };
            heapSort(arr);
            std::vector<int> expected = { -8, -6, -2, -1, 0, 3, 5, 7, 9, 11, 17, 21 };
            Assert::IsTrue(arr == expected);
        }
        TEST_METHOD(TestHeapSortHundred)
        {
            std::vector<int> arr = { 57, 20, 91, 33, 76, 15, 46, 61, 29, 80, 2, 43, 39, 81, 23, 99, 8, 10, 25, 12, 64, 68, 90, 50, 73, 77, 93, 30, 32, 58, 9, 65, 42, 4, 85, 26, 18, 86, 5, 84, 7, 47, 49, 67, 13, 51, 98, 11, 63, 75, 22, 95, 55, 78, 97, 69, 36, 28, 94, 82, 59, 71, 3, 60, 70, 24, 19, 31, 38, 40, 1, 53, 52, 62, 89, 72, 87, 74, 17, 34, 44, 54, 6, 45, 16, 48, 66, 88, 37, 56, 35, 27, 14, 83, 79, 21 };
            heapSort(arr);
            std::vector<int> expected = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 93, 94, 95, 97, 98, 99 };
            Assert::IsTrue(arr == expected);
        }
    };
}
