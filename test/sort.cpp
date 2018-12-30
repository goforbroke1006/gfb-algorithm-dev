//
// Created by goforbroke on 30.12.18.
//

#include "gtest/gtest.h"
#include "../include/sort.h"


TEST(quickSort_1, positive) {
    int arr[] = {2, 0, 8, 4, 5, 1, 9};

    std::cout << "Before: ";
    print(arr, 7);

    quickSort(arr, 0, 6);

    std::cout << "After : ";
    print(arr, 7);


    ASSERT_EQ(0, arr[0]);
    ASSERT_EQ(1, arr[1]);
    ASSERT_EQ(9, arr[6]);
}

TEST(quickSort_2, positive) {
    int arr[] = {2, 2, 2, 2, -9, 0, 8, 4, 5, 1, 9};

    std::cout << "Before: ";
    print(arr, 11);

    quickSort(arr, 0, 10);

    std::cout << "After : ";
    print(arr, 11);

    ASSERT_EQ(-9, arr[0]);
    ASSERT_EQ(0, arr[1]);
    ASSERT_EQ(1, arr[2]);
    ASSERT_EQ(2, arr[3]);
    ASSERT_EQ(2, arr[4]);
    ASSERT_EQ(2, arr[5]);
    ASSERT_EQ(9, arr[10]);
}
