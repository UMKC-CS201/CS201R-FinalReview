#include "Examples.h"

void examplesSorts() {
    // select sort
    int a[7] = { 5, 6, 3, 8, 7, 1, 2 };
    selectSort(a, 7);
    printList(a, 7);

    // insertion sort
    int b[7] = { 5, 6, 3, 8, 7, 1, 2 };
    insertSort(b, 7);
    printList(b, 7);

    // insertion sort
    int c[7] = { 5, 6, 3, 8, 7, 1, 2 };
    bubbleSort(c, 7);
    printList(c, 7);

}

float parta(int& a, int& b) {
    b -= 3;
    a += 5;
    return a - b / 3;
}
int partb(int& a, int b) {
    a = 100;
    b++;
    return a * b / 10;
}
int partc(int a, int b) {
    a = 120;
    b -= 110;
    return a * b / 10;
}

void examplesFunctions() {
    int x = 10, y = 15;
    x = parta(x, y);
    cout << "x = " << x << endl;    //part a

    y = partb(x, y);
    cout << "y = " << y << endl;    //part b

    x = partc(x, y);
    cout << "x = " << x << endl;    //part c
}

struct Student {
    int ID;
    string fname;
    string lname;
    float grade;
};

void examplesFileIO() {
    string strIn, strPart;
    vector<string> row;
    // open file
    ifstream inFile;
    inFile.open("input.txt");
    // verify the file is opened
    if (!inFile.good())
        return;


    //  SAMPLE READS
    getline(inFile, strIn);
    cout << "3a.  getline(inFile, strIn);     => " << strIn << endl;

    inFile >> strIn;
    cout << "3b.  inFile >> strIn;            => " << strIn << endl;

    getline(inFile, strIn, ',');
    cout << "3c.  getline(inFile, strIn,','); => " << strIn << endl;

    getline(inFile, strIn);
    cout << "3d.  getline(inFile, strIn);     => " << strIn << endl;

    //  LOOP TO READ FILE
    while (getline(inFile, strIn)) {
        stringstream inSS(strIn);
        row.clear();
        while (getline(inSS, strPart, ','))
            row.push_back(strPart);
        try { //how to set this up?
            //
        }
        catch (...) {  //what should be tested?
        }

    }



    // close the file


}

void thing1(int* a, int& b, int c) {
    cout << "4.   thing1: " << a << " : " << *a << endl;
    cout << "             " << &b << " : " << b << endl;
    cout << "             " << &c << " : " << c << endl;
    *a = 33;
    b = 66;
    c = 99;
}

void examplesPointers() {

    int* x, y, z;
    y = 150;
    x = &y;	      //Q1: What is the value of x?
    cout << "1.   x = " << x << endl;

    z = *x; 	  //Q2: What is the value of *x?
    cout << "2.   *x = " << *x << endl;

                  //Q3: What is the value of z?
    cout << "3.   z = " << z << endl;


    thing1(x, y, z);  //Q4: What is printed inside of thing1?
                      //Q5: What is the value of x?
    cout << "5.   x = " << x << endl;

                      //Q6: What is the value of y?
    cout << "6.   y = " << y << endl;

                      //Q6: What is the value of z?
    cout << "7.   z = " << z << endl;


}

void examplesClasses() {

    Complex comp1(7, 8);
    Complex comp2(9, 10);
    cout << comp1;
    cout << comp2;
    cout << comp1 + comp2;

}

int sum(int n) {
    if (n <= 0)
        return 0;
    else
        return n + sum(n - 1);
}

int fib(int n) {
    return 0;
}

int fact(int n) {
    return 0;
}

void examplesRecursion() {
    cout << "\t1a - SUM FUNCTION:  ";
    cout << sum(5) << endl;

    cout << "\t1b - Fibonacci:     ";
    cout << fib(5) << endl;

    cout << "\t1c - Factorial      ";
    cout << fact(5) << endl;
}