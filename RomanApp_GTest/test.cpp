#include "pch.h"


#include "Dec2Roman.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(DecRoman_TestSuite, ChainTest)
{
	bool result = Decimal_2_Roman_Chain_UnitTest();

	// NonFatal assertion
	EXPECT_EQ(result, true) << "All decimals 1..3999 should pass and vice versa";
}

TEST(DecRoman_TestSuite, ChainTest2)
{
	bool result = Decimal_2_Roman_Chain_UnitTest();
	// Fatal assertion
	ASSERT_EQ(result, true) << "All decimals 1..3999 should pass and vice versa";
}

TEST(Decmialtest, example)
{
	EXPECT_FLOAT_EQ(2.00001, 2.000011);
	EXPECT_DOUBLE_EQ(2.00000000000001, 2.00000000000002);
	
}


int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}