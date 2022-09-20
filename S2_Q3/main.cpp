#include <iostream>
#include "complex.h"


Complex create_new_complex() {
	int real = 0;
	int imaginary = 0;
	
	std::cout << "Enter 2nd Complex number values:\n";
	std::cout << "Enter Real value: ";
	std::cin >> real;
	std::cout << "Enter Imaginary value: ";
	std::cin >> imaginary;

	Complex new_complex(real, imaginary);
	return new_complex;
}


int main() {
	
	Complex num1;
	Complex num2 = create_new_complex();

	num1.display_complex();
	num2.display_complex();
	
	
	
	return 0;
}