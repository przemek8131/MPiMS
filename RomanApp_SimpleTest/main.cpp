// ==========================================================================
//
// Oprogramowanie napisane przez prof. Bogusława Cyganka do użytku z książki:
// ==> Programowanie w jêzyku C++. Wprowadzenie dla in¿ynierów. PWN 2023 <==
//
// Oprogramowanie jest dostarczane w stanie takim, w jakim jest, i do celów edukacyjnych
// bez żadnych gwarancji ani odpowiedzialnoœci za jego u¿ycie w jakiejkolwiek aplikacji.
//
// ==========================================================================
//
// Software written by Boguslaw Cyganek (C) to be used with the book:
// INTRODUCTION TO PROGRAMMING WITH C++ FOR ENGINEERS
// Published by Wiley, 2020
//
// The software is supplied as is and for educational purposes
// without any guarantees nor responsibility of its use in any application. 
//
// ==========================================================================


#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <Dec2Roman.h>

void Dec_2_Roman_Test(void);
bool ConvertDecimal_2_RomanNumber_UnitTest(void);
auto ConvertRoman_2_DecimalNumber(const std::string& Roman_str);

int main()
{
	std::cout << "Good day!" << std::endl;

	Dec_2_Roman_Test();
	//ConvertDecimal_2_RomanNumber_UnitTest(); //prosty test z assertem
	
	// Test z losowym wektorem testującym
	/*if (Decimal_2_Roman_Chain_UnitTest())
		std::cout << "TEST PASSED" << "\n\r";
	else
		std::cout << "TEST FAILED" << "\n\r";*/

	return 0;
}
