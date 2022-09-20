#include "complex.h"

Complex::Complex() {
	
}

Complex::Complex(int real, int imaginary) {
	
}

void Complex::display_complex() {
	
}

Complex Complex::operator+(Complex const& obj) {
	Complex res;
	res.real = this->real + obj.real;
	res.imaginary = this->imaginary + obj.imaginary;
}

Complex Complex::operator-(Complex const& obj) {
	Complex res;
	res.real = this->real - obj.real;
	res.imaginary = this->imaginary - obj.imaginary;
}

Complex Complex::operator*(Complex const& obj) {
	Complex res;
	res.real = (this->real * obj.real) - (this->imaginary * obj.imaginary);
	res.imaginary = (this->real * obj.imaginary) + (this->imaginary * obj.real);
}