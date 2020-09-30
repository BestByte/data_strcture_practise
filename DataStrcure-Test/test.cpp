#include "pch.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
  EXPECT_EQ(1, 1);


}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#include <iostream>
#include "gtest/gtest.h"
#include <stdio.h>
#include "add.h";

int main(int argc, char* argv[])
{
	std::cout << "Hello World!\n";
	std::cout << "Google Test Begin!\n";
	::testing::InitGoogleTest(&argc, argv);


	RUN_ALL_TESTS();



	std::cout << "Google Test End!\n";
	getchar();
	return 0;
}

TEST(expect, test)
{
	EXPECT_EQ(2, add(1, 1));
	EXPECT_EQ(3, add(1, 2));

}
int Abs(int x)
{
	return x > 0 ? x : -x;
}

TEST(IsAbsTest, HandlerTrueReturn)
{
	ASSERT_TRUE(Abs(1) == 1) << "Abs(1)=1";  //ASSERT_TRUE期待结果是true,operator<<输出一些自定义的信息
	ASSERT_TRUE(Abs(-1) == 1) << "Abs(-1)=1";
	ASSERT_FALSE(Abs(-2) == -2);  //期待结果是false
	ASSERT_EQ(Abs(1), Abs(-1));
	ASSERT_NE(Abs(-1), 0);
	ASSERT_LT(Abs(-1), 2);
	ASSERT_GT(Abs(-1), 0);
	ASSERT_LE(Abs(-1), 2);
	ASSERT_GE(Abs(-1), 0);
}
int TestYear(int Year)
{
	return true;
}

TEST(Test, hanlePositive)
{
	EXPECT_EQ(true, TestYear(2004));
}


TEST(AddTest, HandlePositive) {
	EXPECT_EQ(5, add(2, 3));
}
