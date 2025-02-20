#include <iostream>
using namespace std;


const int N = 10;

template <class T>
void invierteN (Pila<T>& pila, int N);

template <class T>
ostream& operator<< (ostream& os, Pila<T> pila); 

int main() {
	
	// genera una pila de enteros con N elementos

	// visualiza la pila por pantalla

	// invierte los N/2 elementos que están en la parte superior de la pila

	// visualiza la pila por pantalla para ver cómo ha quedado

	return 0;
}


// precondición: la pila tiene al menos N elementos
template <class T>
void invierteN(Pila<T>& pila, int N){ 
	
}


template <class T>
ostream& operator<< (ostream& os, Pila<T> pila) {	
	// completa la implementación: envía los elementos de la pila al ostream

	
	return os;
}