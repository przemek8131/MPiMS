#pragma once

class Complex {
private:
	float re;
	float im;

public:
	Complex(float, float);
	void set_re(float);
	void set_im(float);
	float get_re(void) const;
	float get_im(void) const;
	Complex operator !();
	Complex operator +(const Complex&);
	Complex operator -(const Complex&);
	Complex operator *(const Complex&);
	Complex operator /(const Complex&);
	bool operator ==(const Complex&);
};