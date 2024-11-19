// CS201R-FinalReview.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Sorts.h"
#include "Examples.h"
#include "Complex.h"
using namespace std;


int main() {
    cout << "\n**************************************";
    cout << "\nARRAYS, VECTORS, SORTS, SEARCHES\n";
    int arrA[7] = { 5, 6, 3, 8, 7, 1, 2 };
    int* b;
    b = arrA;
    cout << "1.  The value of *(arrA + 2) = " << *(arrA + 2) << endl;
    cout << "2.  The value of arrA + 2 = " << (arrA + 2) << endl;

    examplesSorts();

    int arrC[] = { 1,2,3,5,6,7,8 };
    binarySearch(arrC, 7, 1);

    cout << "\n7. VECTORS\n";
    vector<int> v1 = { 10,20,30,40,50,60 };
    //declare iterator

    //write standard for loop

    cout << endl << endl;

    cout << "\n**************************************";
    cout << "\nFUNCTIONS\n";
    cout << "\n1. FUNCTIONS\n";
    examplesFunctions();

    cout << "\n**************************************";
    cout << "\nFILE I/0 AND EXCEPTION HANDLING\n";
    examplesFileIO();

    cout << "\n**************************************";
    cout << "\nPOINTERS\n";
    examplesPointers();

    cout << "\n**************************************";
    cout << "\nCLASSES: OPERATOR OVERLOAD\n";
    examplesClasses();

    cout << "\n**************************************";
    cout << "\nRECURSION\n";
    examplesRecursion();

    return 0;
}