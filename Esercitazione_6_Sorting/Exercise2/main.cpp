//PIERANDREI MATTIAS Esercitazione_6_Sorting

#include <cmath> // contiene floor
#include <iostream>
#include <numeric> // contiene iota
#include <iostream>
#include <sstream>
#include <chrono> 

#include "SortingAlgorithm.hpp"
using namespace std;


////////////////////////////////////////////////////////////////////////////////////////////////////////

template<typename T>
string ArrayToString(const vector<T>& v)
{
    string str;
    ostringstream toString;
    toString << "[ ";
    for (const T& e: v)
        toString << e << " ";
    toString << "]";

    return toString.str();
}

////////////////////////////////////////////////////////////////////////////////////////////////////////



int main(int argc, char *argv[])
{
	//Lanciare programma con:    ./programma "dimensione vettore"
	if (argc != 2) {
        cerr << "Usage: ./Sorting2 <vector_size>" << std::endl;
        return 1;
    }
	
	cout << "\n--------------------------" << endl;
    size_t n = stoi(argv[1]); //setting the size of the vector chosen by the user
	cout << "vector size : " << n << endl;
	unsigned int num_experiment = 100;
	cout << "NumExperiment : " << num_experiment << endl;
	cout << "--------------------------" <<  "\n" << endl;
	
	
	//INITIALITING VECTORS: 
	//-----------------------------------------------------------
	vector<int> v1(n);
	vector<double> v2(n);
	vector<int> v3(n, 0);
	
    vector<int> rdm(n);
    generate(rdm.begin(), rdm.end(), []() { return rand() % 10000; }); // Random number
	
	//cout << "random vector: " << ArrayToString(rdm) << endl;

	
	
	
	
	//BUBBLE SORT : 
	//-----------------------------------------------------------

    double time_elapsed_bubble_v1 = 0.0;
    for(unsigned int t = 0; t < num_experiment; t++)
    {
        vector<int> v(v1);
        std::chrono::steady_clock::time_point start_time = std::chrono::steady_clock::now();
        SortLibrary::BubbleSort<int>(v);
        std::chrono::steady_clock::time_point end_time = std::chrono::steady_clock::now();
        time_elapsed_bubble_v1 += std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time).count();
    }
    time_elapsed_bubble_v1 /= num_experiment;
    cout << "BubbleSort - v1: " << time_elapsed_bubble_v1 << endl;

    double time_elapsed_bubble_v2 = 0.0;
    for(unsigned int t = 0; t < num_experiment; t++)
    {
        vector<double> v(v2);
        std::chrono::steady_clock::time_point start_time = std::chrono::steady_clock::now();
        SortLibrary::BubbleSort<double>(v);
        std::chrono::steady_clock::time_point end_time = std::chrono::steady_clock::now();
        time_elapsed_bubble_v2 += std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time).count();
    }
    time_elapsed_bubble_v2 /= num_experiment;
    cout << "BubbleSort - v2: " << time_elapsed_bubble_v2 << endl;

    double time_elapsed_bubble_v3 = 0.0;
    for(unsigned int t = 0; t < num_experiment; t++)
    {
        vector<int> v(v3);
        std::chrono::steady_clock::time_point start_time = std::chrono::steady_clock::now();
        SortLibrary::BubbleSort<int>(v);
        std::chrono::steady_clock::time_point end_time = std::chrono::steady_clock::now();
        time_elapsed_bubble_v3 += std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time).count();
    }
    time_elapsed_bubble_v3 /= num_experiment;
    cout << "BubbleSort - v3: " << time_elapsed_bubble_v3 << endl;
	
	double time_elapsed_bubble_rdm = 0.0;
    for(unsigned int t = 0; t < num_experiment; t++)
    {
        vector<int> v(rdm);
        std::chrono::steady_clock::time_point start_time = std::chrono::steady_clock::now();
        SortLibrary::BubbleSort<int>(v);
        std::chrono::steady_clock::time_point end_time = std::chrono::steady_clock::now();
        time_elapsed_bubble_rdm += std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time).count();
    }
    time_elapsed_bubble_rdm /= num_experiment;
    cout << "BubbleSort - rdm: " << time_elapsed_bubble_rdm << endl;
	
	//-----------------------------------------------------------
	
	cout<<endl;
	
	
	
	
	
	
	
	//HEAP SORT : 
	//-----------------------------------------------------------
	
	double time_elapsed_heap_v1 = 0.0;
    for(unsigned int t = 0; t < num_experiment; t++)
    {
        vector<int> v(v1);
        std::chrono::steady_clock::time_point start_time = std::chrono::steady_clock::now();
        SortLibrary::HeapSort<int>(v);
        std::chrono::steady_clock::time_point end_time = std::chrono::steady_clock::now();
        time_elapsed_heap_v1 += std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time).count();
    }
    time_elapsed_heap_v1 /= num_experiment;
    cout << "HeapSort - v1: " << time_elapsed_heap_v1 << endl;

    double time_elapsed_heap_v2 = 0.0;
    for(unsigned int t = 0; t < num_experiment; t++)
    {
        vector<double> v(v2);
        std::chrono::steady_clock::time_point start_time = std::chrono::steady_clock::now();
        SortLibrary::HeapSort<double>(v);
        std::chrono::steady_clock::time_point end_time = std::chrono::steady_clock::now();
        time_elapsed_heap_v2 += std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time).count();
    }
    time_elapsed_heap_v2 /= num_experiment;
    cout << "HeapSort - v2: " << time_elapsed_heap_v2 << endl;

    double time_elapsed_heap_v3 = 0.0;
    for(unsigned int t = 0; t < num_experiment; t++)
    {
        vector<int> v(v3);
        std::chrono::steady_clock::time_point start_time = std::chrono::steady_clock::now();
        SortLibrary::HeapSort<int>(v);
        std::chrono::steady_clock::time_point end_time = std::chrono::steady_clock::now();
        time_elapsed_heap_v3 += std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time).count();
    }
    time_elapsed_heap_v3 /= num_experiment;
    cout << "HeapSort - v3: " << time_elapsed_heap_v3 << endl;
	
	double time_elapsed_heap_rdm = 0.0;
    for(unsigned int t = 0; t < num_experiment; t++)
    {
        vector<int> v(rdm);
        std::chrono::steady_clock::time_point start_time = std::chrono::steady_clock::now();
        SortLibrary::HeapSort<int>(v);
        std::chrono::steady_clock::time_point end_time = std::chrono::steady_clock::now();
        time_elapsed_heap_rdm += std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time).count();
    }
    time_elapsed_heap_rdm /= num_experiment;
    cout << "HeapSort - rdm: " << time_elapsed_heap_rdm << endl;
	
	//-----------------------------------------------------------

	cout<<endl;
	
    return 0;
}