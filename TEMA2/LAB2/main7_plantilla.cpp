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

	// invierte los N/2 elementos que est�n en la parte superior de la pila

	// visualiza la pila por pantalla para ver c�mo ha quedado

	return 0;
}


// precondici�n: la pila tiene al menos N elementos
template <class T>
void invierteN(Pila<T>& pila, int N){ 
	
}


template <class T>
ostream& operator<< (ostream& os, Pila<T> pila) {	
	// completa la implementaci�n: env�a los elementos de la pila al ostream

	
	return os;
}