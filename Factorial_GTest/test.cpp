#include "pch.h"
#include "Factorial.h"

/*
	TEST()
*/
TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(FactorialTest, HandlesZeroInput) 
{
	EXPECT_EQ(Factorial(0), 1);
}

TEST(FactorialTest, HandlesPositiveInput) 
{
	EXPECT_EQ(Factorial(1), 1);
	EXPECT_EQ(Factorial(2), 2);
	EXPECT_EQ(Factorial(3), 6);
	EXPECT_EQ(Factorial(4), 24);
	EXPECT_EQ(Factorial(8), 40320);

}

TEST(DISABLED_FactorialTest, ExceptionNegativeInput)
{
	ASSERT_THROW(Factorial(-2), std::logic_error);
}

TEST(FactorialTest, ExceptionNegativeInput)
{
	ASSERT_THROW(Factorial(-2), std::logic_error);
}

/*
	TEST_P
*/

struct FactorialTestParams
{
	int a, expected;
};

struct ParametrizedTest : public testing::TestWithParam<FactorialTestParams>
{
};

FactorialTestParams params[] = { {1,1}, {2,2}, {3,6}, {4,24} };
INSTANTIATE_TEST_CASE_P(Tests, ParametrizedTest, testing::ValuesIn(params));

TEST_P(ParametrizedTest, FactorialResult)
{
	FactorialTestParams param = GetParam();
	ASSERT_EQ(Factorial(param.a), param.expected);
}


int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}