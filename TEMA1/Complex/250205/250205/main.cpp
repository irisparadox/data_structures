#include <iostream>
#include "Complejo.h"

int main() {
	Complejo c1(1.f, 2.f);
	Complejo c2(c1);

	std::cout << c1 << '\n' << c2 << '\n';

	c2 = c2 - c1;

	std::cout << c2 << '\n';

	Complejo c3 = c1 / c1;

	std::cout << c3 << '\n';
	try {
		std::cout << c3 / c2 << '\n';
	}
	catch (...) {
		std::cerr << "Error";
	}

	return 0;
}