#include<iostream>

int main() {
	std:: cout << "start\n";
	try {
		std::cout << "Inside try block\n";
		throw 99;
		std::cout << "This will not execute";
	}
	catch (int i) {
		std::cout << "caught an exception --value is: ";
		std::cout << i << "\n";
	}
	return 0;
}