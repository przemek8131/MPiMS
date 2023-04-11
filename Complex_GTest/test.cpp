#include "pch.h"
#include "Complex.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

/*
	TEST_F()
*/

class ComplexTest : public ::testing::Test
{
protected:
	Complex a = Complex(2,3);
	Complex b = Complex(4,-3);

public:
	ComplexTest(){
		//std::cout << "\n\r" << "Inicjalizacja dwoch zmiennych" << "\n\r\n\r";
	}
};

TEST_F(ComplexTest, AddTest)
{
	Complex wynik_prawidlowy = Complex(6, 0);
	Complex wynik = a + b;

	EXPECT_EQ(wynik.get_re(), wynik_prawidlowy.get_re());
	EXPECT_EQ(wynik.get_im(), wynik_prawidlowy.get_im());
}

TEST_F(ComplexTest, SubTest)
{
	Complex wynik_prawidlowy = Complex(-2, 6);
	Complex wynik = a - b;

	EXPECT_EQ(wynik.get_re(), wynik_prawidlowy.get_re());
	EXPECT_EQ(wynik.get_im(), wynik_prawidlowy.get_im());
}

TEST_F(ComplexTest, MulTest)
{
	Complex wynik_prawidlowy = Complex(17, 6);
	Complex wynik = a*b;

	EXPECT_EQ(wynik.get_re(), wynik_prawidlowy.get_re());
	EXPECT_EQ(wynik.get_im(), wynik_prawidlowy.get_im());
}

TEST_F(ComplexTest, DivTest)
{
	Complex wynik_prawidlowy = Complex(-0.04, 0.72);
	Complex wynik = a / b;

	EXPECT_FLOAT_EQ(wynik.get_re(), wynik_prawidlowy.get_re());
	EXPECT_FLOAT_EQ(wynik.get_im(), wynik_prawidlowy.get_im());
}

TEST_F(ComplexTest, ExceptionDivTest)
{
	Complex tmp = Complex(0, 0);
	ASSERT_THROW(a/tmp, std::domain_error);
}

