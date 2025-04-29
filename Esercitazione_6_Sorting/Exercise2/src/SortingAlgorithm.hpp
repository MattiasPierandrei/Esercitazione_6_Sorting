//PIERANDREI MATTIAS Esercitazione_6_Sorting

#pragma once

#include <iostream>
#include <vector>

using namespace std;

namespace SortLibrary {

///////////////////////////////////////////////////////////////////////////////

template<typename T>
void BubbleSort(std::vector<T>& v) {
	
    size_t n = v.size();
	
    for (size_t i = 0; i < n - 1; ++i) {
        for (size_t j = 0; j < n - 1 - i; ++j) {
            if (v[j] > v[j + 1]) {
                std::swap(v[j], v[j + 1]);
            }
        }
    }
	
}

///////////////////////////////////////////////////////////////////////////////

template<typename T>
void Heapify(std::vector<T>& v, size_t n, size_t i) {
    size_t largest = i;
    size_t left = 2 * i + 1;
    size_t right = 2 * i + 2;

    if (left < n && v[left] > v[largest]) {
        largest = left;
    }

    if (right < n && v[right] > v[largest]) {
        largest = right;
    }

    if (largest != i) {
        std::swap(v[i], v[largest]);
        Heapify(v, n, largest);
    }
}

template<typename T>
void HeapSort(std::vector<T>& v) {
    size_t n = v.size();

    for (size_t i = n / 2 - 1; i < n; --i) {
        Heapify(v, n, i);
    }

    for (size_t i = n - 1; i > 0; --i) {
        std::swap(v[0], v[i]);
        Heapify(v, i, 0);
    }
	
}

///////////////////////////////////////////////////////////////////////////////

}


