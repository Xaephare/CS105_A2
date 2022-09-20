#include <iostream>
#include "complex.h"


void operation_menu(Complex num1, Complex num2) { 
	bool running = true;
	int choice;
	Complex res;
	std::cout << "Choose Operation from Menu:\n";
	std::cout << "1. Addition:\n";
	std::cout << "2. Subtraction:\n";
	std::cout << "3. Multiplication:\n";
	std::cout << "4. Exit:\n\n";

	while (running) {

		std::cout << "Please enter your option: ";
		std::cin.ignore();
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			std::cout << "C1: ";
			num1.display_complex();
			std::cout << std::endl;
			std::cout << "C2: ";
			num2.display_complex();
			std::cout << std::endl;
			res = num1.operator+(num2);
			std::cout << "C3 (Result): ";
			res.display_complex();
			std::cout << "\n\n";
			break;
		case 2:
			std::cout << "C1: ";
			num1.display_complex();
			std::cout << std::endl;
			std::cout << "C2: ";
			num2.display_complex();
			std::cout << std::endl;
			res = num1.operator-(num2);
			std::cout << "C3 (Result): ";
			res.display_complex();
			std::cout << "\n\n";
			break;
		case 3:
			std::cout << "C1: ";
			num1.display_complex();
			std::cout << std::endl;
			std::cout << "C2: ";
			num2.display_complex();
			std::cout << std::endl;
			res = num1.operator*(num2);
			std::cout << "C3 (Result): ";
			res.display_complex();
			std::cout << "\n\n";
			break;
		case 4:
			running = false;
			break;
		default:
			break;
		}
	}
}


Complex create_new_complex() {
	int real = 0;
	int imaginary = 0;

	std::cout << "Enter 2nd Complex number values:\n";
	std::cout << "Enter Real value: ";
	std::cin >> real;
	std::cout << "Enter Imaginary value: ";
	std::cin >> imaginary;
	std::cout << std::endl;

	Complex new_complex(real, imaginary);
	return new_complex;
}


int main() {

	Complex num1; //this complex number is set by default constructor as per the brief
	std::cout << "1st Complex number: ";
	num1.display_complex();
	std::cout << "\n\n";

	Complex num2 = create_new_complex();
	operation_menu(num1, num2);

	return 0;
}