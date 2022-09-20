#include "complex.h"


Complex::Complex() {
	real = 3;
	imaginary = 2;
}

Complex::Complex(int r, int i) {
	real = r;
	imaginary = i;
}

void Complex::display_complex() {
	if (this->imaginary > 0) {
		std::cout << this->real << " + " << this->imaginary << "i\n";
	}
	else {
		std::cout << this->real << " - " << this->imaginary << "i\n";
	}
}

Complex Complex::operator+(Complex const& obj) {
	Complex res;
	res.real = this->real + obj.real;
	res.imaginary = this->imaginary + obj.imaginary;
	return res;
}

Complex Complex::operator-(Complex const& obj) {
	Complex res;
	res.real = this->real - obj.real;
	res.imaginary = this->imaginary - obj.imaginary;
	return res;
}

Complex Complex::operator*(Complex const& obj) {
	Complex res;
	res.real = (this->real * obj.real) - (this->imaginary * obj.imaginary);
	res.imaginary = (this->real * obj.imaginary) + (this->imaginary * obj.real);
	return res;
}