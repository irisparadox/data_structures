#include <iostream>
using namespace std;
#include "cola.h"

template <class T>
ostream& operator<< (ostream& os, Cola<T> cola) {
	// completa la implementación


	return os;
}

int main() {

	Cola<int> cola;

	cout << "Cola creada vacia. Vacia? " << boolalpha << cola.esVacia() << endl;
	cout << "Numero de elementos: " << cola.numElems() << endl;

	for (int i = 1; i <= 10; i++)
		cola.pon(i);

	cout << "Cola tras annadir los valores del 1 al 10-->\n";
	cout << cola;
	cout << "Numero de elementos: " << cola.numElems() << endl;

	cout << "Primero de la cola " << cola.primero() << endl;
	cout << "Numero de elementos: " << cola.numElems() << endl;
	cout << "Cola. Vacia? " << boolalpha << cola.esVacia() << endl;

	cola.quita();
	cout << "Tras quitar el primer elemento-->\n";
	cout << cola;
	cout << "Numero de elementos: " << cola.numElems() << endl;

	Cola<int> cola2;
	for (int i = 5; i >= 1; i--)
		cola2.pon(i);
	cout << "\nCola2 con los valores del 5 al 1-->\n";
	cout << cola2;
	cout << "Numero de elementos: " << cola2.numElems() << endl;

	cout << "Comparamos las colas: ";
	cout << "cola == cola2? " << boolalpha << (cola == cola2) << endl;

	cout << "Cola tras asignarle Cola2 (prueba del operador de asignacion)" << endl;
	cola = cola2;
	cout << cola;
	cout << "Numero de elementos de Cola: " << cola.numElems() << endl;

	cout << "Comparamos las colas: ";
	cout << "cola == cola2? " << boolalpha << (cola == cola2) << endl; 

	Cola<int> cola3(cola2);
	cout << "\nCola3 inicializada con cola2 (prueba de constructor de copia)--->" << endl;
	cout << cola3;
	cout << "Numero de elementos de Cola3: " << cola3.numElems() << endl;
	cout << "cola2 == cola3? " << boolalpha << (cola2 == cola3) << endl; 

	return 0;
}
