#pragma once

#include <iostream>


class Complex {
	int real, imaginary;
public:
	Complex();
	Complex(int real, int imaginary);
	Complex operator + (Complex const& obj);
	Complex operator - (Complex const& obj);
	Complex operator * (Complex const& obj);
};