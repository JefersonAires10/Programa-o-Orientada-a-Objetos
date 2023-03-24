#include <iostream>
#include "complex.h"

using namespace std;

Complex::Complex(double realPart, double imaginaryPart)
    : real(realPart), imaginary(imaginaryPart)
{
}

Complex Complex::operator+(const Complex &operand2) const
{
    return Complex(real + operand2.real, imaginary + operand2.imaginary);
}

Complex Complex::operator-(const Complex &operand2) const
{
    return Complex(real - operand2.real, imaginary - operand2.imaginary);
}

void Complex::print() const
{
    cout << "(" << real << "," << imaginary << ")" << endl;
}