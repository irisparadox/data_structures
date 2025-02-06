#ifndef _COMPLEJO_H
#define _COMPLEJO_H

#include <iostream>

class EDivisionPorCero {};

template <typename _Ty = float>
class Complejo {
public:
	Complejo() : _real(nullptr), _img(nullptr) {};

	Complejo(const _Ty& _Real, const _Ty& _Img) {
		_real = new _Ty(_Real);
		_img  = new _Ty(_Img);
	};

	Complejo(const Complejo& other) {
		_real = new _Ty(*other._real);
		_img  = new _Ty(*other._img);
	};

	~Complejo() {
		delete _real;
		delete _img;
	}

public:
	Complejo operator+(const Complejo& c) const {
		return Complejo(*_real + *c._real, *_img + *c._img);
	}

	Complejo operator-(const Complejo& c) const {
		return Complejo(*_real - *c._real, *_img - *c._img);
	}

	Complejo operator*(const Complejo& c) const {
		return Complejo((*_real * *c._real) - (_img * *c._img), (*_real * *c._img) + (*_img * *c._real));
	}

	Complejo operator/(const Complejo& c) const {
		_Ty _denom = (*c._real * *c._real) + (*c._img * *c._img);
		if (_denom == 0.f) throw EDivisionPorCero();
		_Ty _leftnum, _rightnum;
		_leftnum = (*_real * *c._real) + (*_img * *c._img);
		_rightnum = (*_img * *c._real) - (*_real * *c._img);
		return Complejo(_leftnum / _denom, _rightnum / _denom);
	}

	Complejo& operator=(const Complejo& other) {
		if (this != &other) {
			*_real = *other._real;
			*_img  = *other._img;
		}

		return *this;
	}

	Complejo suma(const Complejo& c) const {
		return *this + c;
	}

	friend std::ostream& operator<<(std::ostream& out, const Complejo& c) {
		out << *c._real << "+" << *c._img << "i";
		return out;
	}

private:
	_Ty* _real;
	_Ty* _img;
};

#endif
