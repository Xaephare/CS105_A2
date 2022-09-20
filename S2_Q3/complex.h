#pragma once

#include <iostream>


class Complex {
	int real, imaginary;
public:
	Complex();
	Complex(int real, int imaginary);
	void display_complex();
	Complex operator + (Complex const& obj);
	Complex operator - (Complex const& obj);
	Complex operator * (Complex const& obj);
};