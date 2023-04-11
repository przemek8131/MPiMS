#include <iostream>
#include "pch.h"
#include "Factorial.h"

int Factorial(int n) {
	if (n < 0)
		throw std::logic_error("Liczba ujemna");
	if (n == 0)
		return 1;
	if (n == 1) 
		return 1;
	return n * Factorial(n - 1);
}
