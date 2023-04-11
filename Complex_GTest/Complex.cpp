#include <iostream>
#include "pch.h"
#include "Complex.h"


Complex::Complex(float x = 0, float y = 0) : re{ x }, im{ y }{}

void Complex::set_re(float x) { re = x; }
void Complex::set_im(float y) { im = y; }

float Complex::get_re(void) const { return re; }
float Complex::get_im(void) const { return im; }

Complex Complex::operator !() {
	return Complex(this->re, - this->im);
}

Complex Complex::operator +(const Complex& c) {
	return Complex(this->re + c.get_re(), this->im + c.get_im());
}

Complex Complex::operator -(const Complex& c) {
	return Complex(this->re - c.get_re(), this->im - c.get_im());
}

Complex Complex::operator *(const Complex& c) {
	return Complex(this->re * c.get_re() - this->im * c.get_im(), this->re * c.get_im() + this->im * c.get_re());
}

Complex Complex::operator /(const Complex& c) {
	Complex tmp;
	float w;
	w = c.get_re() * c.get_re() + c.get_im() * c.get_im();

	if (w > 0) {
		tmp.set_re((this->re * c.get_re() + this->im * c.get_im()) / w);
		tmp.set_im((c.get_re() * this->im - this->re * c.get_im()) / w);
		return tmp;
	}
	else
		throw std::domain_error("Dzielenie przez 0");
}

bool Complex::operator ==(const Complex& c) {
	if ((this->re == c.get_re()) && (this->im == c.get_im()))
		return true;
	else
		return false;
}
