//PIERANDREI MATTIAS 

#pragma once

#include <iostream>
#include <vector>

#include <gtest/gtest.h>
#include "SortingAlgorithm.hpp"

namespace SortLibrary {

TEST(TestSorting, TestBubbleSort)
{
    std::vector<int> v = {6, 11, 4 , 12, 3, 1, 6, 2, 5, 7};
    BubbleSort<int>(v);
    std::vector<int> sortedV = {1, 2, 3, 4, 5, 6, 6, 7, 11 ,12};
    //EXPECT_EQ(v, sortedV);    if it fails, the test continues
	ASSERT_EQ(v, sortedV);
}

TEST(TestSorting, TestHeapSort)
{
    std::vector<int> v = {6, 11, 4 , 12, 3, 1, 6, 2, 5, 7};
    HeapSort<int>(v);
    std::vector<int> sortedV = {1, 2, 3, 4, 5, 6, 6, 7, 11 ,12};
    //EXPECT_EQ(v, sortedV);   if it fails, the test continues
	ASSERT_EQ(v, sortedV);
}

}