#include "pila.h"
#include <iostream>

template <class T>
void imprimeDesdeBaseIterativo (Pila<T> stack) {
	Pila<T> reversed;
	while (!stack.esVacia()) {
		reversed.apila(stack.cima());
		stack.desapila();
	}
	while (!reversed.esVacia()) {
		std::cout << reversed.cima();
		reversed.desapila();
	}
}


template <class T>
void imprimeDesdeBaseIterativoREFCTE(const Pila<T>& stack) {
	Pila<T> copia = stack;
	Pila<T> reversed;

	while (!copia.esVacia()) {
		reversed.apila(copia.cima());
		copia.desapila();
	}
	while (!reversed.esVacia()) {
		std::cout << reversed.cima();
		reversed.desapila();
	}
}


template <class T>
void imprimeDesdeBaseRecursivo(Pila<T> pila) {
	if (pila.esVacia()) return;

	T top = pila.cima();
	pila.desapila();

	imprimeDesdeBaseRecursivo(pila);

	std::cout << top;
}


int main() {
	Pila<int> stack;
	for (int i = 0; i < 10; ++i) {
		stack.apila(i);
	}
	imprimeDesdeBaseIterativo(stack);
	std::cout << '\n';
	imprimeDesdeBaseIterativoREFCTE(stack);
	std::cout << '\n';
	imprimeDesdeBaseRecursivo(stack);
	
	return 0;
}

