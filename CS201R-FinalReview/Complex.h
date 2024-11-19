#pragma once
#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex() {
        real = 0;
        imag = 0;
    }
    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    Complex operator+(Complex rhs) {
        cout << "COMPLEX OPERATOR+ OVERLOAD:  ";
        Complex newClass;
        newClass.real = this->real + rhs.real;
        newClass.imag = this->imag + rhs.imag;
        return newClass;
    }

    friend ostream& operator<<(ostream& out, const Complex& c) {
        // write this
        cout << "COMPLEX OPERATOR<< OVERLOAD:  ";
        out << c.real << " + " << c.imag << "i\n";
        return out;
    }

};