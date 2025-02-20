#include <iostream>
#include "pila.h"


const int N = 10;

template <class T>
void invierteN (Pila<T>& pila, int N);

template <class T>
std::ostream& operator<< (std::ostream& os, Pila<T> pila); 

int main() {
	Pila<int> stack;
	for (int i = 0; i < N; ++i) {
		stack.apila(i);
	}
	std::cout << stack << '\n';

	invierteN(stack, N / 2);

	std::cout << stack << '\n';

	return 0;
}


// precondición: la pila tiene al menos N elementos
template <class T>
void invierteN(Pila<T>& pila, int N){ 
	int i = 0;
	Pila<T> aux = pila;
	while (!pila.esVacia() && i < N) {
		pila.desapila();
		++i;
	}
	i = 0;
	while (!aux.esVacia() && i < N) {
		pila.apila(aux.cima());
		aux.desapila();
		++i;
	}
}


template <class T>
std::ostream& operator<< (std::ostream& os, Pila<T> pila) {
	while (!pila.esVacia()) {
		os << pila.cima();
		pila.desapila();
	}
	
	return os;
}