#include <iostream>  // para el uso de ostream en la sobrecarga de << como función amiga

#ifndef _COMPLEJO_H
#define _COMPLEJO_H

class EDivisionPorCero {};  // clase excepción para la operación parcial /

class Complejo {
public:
	Complejo();
	Complejo(float _Real, float _Img);
	Complejo(const Complejo& other);

public:
	float real() const;
	float img() const;

public:
	Complejo operator+(const Complejo& c) const;
	Complejo operator-(const Complejo& c) const;
	Complejo operator*(const Complejo& c) const;
	Complejo operator/(const Complejo& c) const;
	Complejo suma(const Complejo& c) const; 

	friend std::ostream& operator<<(std::ostream& out, const Complejo& c);
private: 
	float _real;
	float _img;
};

#endif
