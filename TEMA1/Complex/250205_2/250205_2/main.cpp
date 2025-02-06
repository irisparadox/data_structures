#include <iostream>
#include <vector>
#include "complex.h"

int main() {
	Complejo<float> c1(1.f, 2.f);
	Complejo<float> c2(c1);

	std::cout << c1 << '\n' << c2 << '\n';

	c2 = c2 - c1;

	std::cout << c2 << '\n';

	Complejo<float> c3 = c1 / c1;
	Complejo<> c4 = c3;

	std::cout << c3 << '\n';
	try {
		std::cout << c3 / c2 << '\n';
	}
	catch (...) {
		std::cerr << "Error\n";
	}

	return 0;
}