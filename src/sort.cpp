//
// Created by goforbroke on 30.12.18.
//

#include <iostream>

void print(const int *arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void quickSort(int *arr, int left, int right) {
    int i = left, j = right;
    int pivot = arr[(left + right) / 2];
    while (i <= j) {
        while (arr[i] < pivot) ++i;
        while (arr[j] > pivot) --j;
        if (i <= j) {
            //std::cout << "swap " << arr[i] << " and " << arr[j] << std::endl;
            swap(arr[i], arr[j]);
            ++i;
            --j;
        }
    }

    if (j > left) quickSort(arr, left, j);
    if (i < right) quickSort(arr, i, right);
}
