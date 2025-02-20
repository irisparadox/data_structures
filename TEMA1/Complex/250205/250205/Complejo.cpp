#include "Complejo.h"

Complejo::Complejo() : _real(), _img() {};
Complejo::Complejo(float _Real, float _Img) : _real(_Real), _img(_Img) {};
Complejo::Complejo(const Complejo& other) : _real(other._real), _img(other._img) {};

float Complejo::real() const {
	return _real;
}

float Complejo::img() const {
	return _img;
}

Complejo Complejo::operator+(const Complejo& c) const {
	return Complejo(_real + c._real, _img + c._img);
}

Complejo Complejo::operator-(const Complejo& c) const {
	return Complejo(_real - c._real, _img - c._img);
}

Complejo Complejo::operator*(const Complejo& c) const {
	return Complejo((_real * c._real) - (_img * c._img), (_real * c._img) + (_img * c._real));
}

Complejo Complejo::operator/(const Complejo& c) const {
	float _denom = (c._real * c._real) + (c._img * c._img);
	if (_denom == 0.f) throw EDivisionPorCero();
	float _leftnum, _rightnum;
	_leftnum  = (_real * c._real) + (_img * c._img);
	_rightnum = (_img * c._real) - (_real * c._img);
	return Complejo(_leftnum / _denom, _rightnum / _denom);
}

Complejo Complejo::suma(const Complejo& c) const {
	return *this + c;
}

std::ostream& operator<<(std::ostream& out, const Complejo& c) {
	out << c._real << "+" << c._img << "i";
	return out;
}

