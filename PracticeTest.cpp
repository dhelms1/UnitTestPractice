/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, smoke_test)
{
    ASSERT_TRUE(true);
}

// ----------------------  TEST FUNCTIONS FROM PRACTICE CLASS (PRACTICE.CPP) ---------------------- 

// ----------- int count_starting_repeats(string word); ----------- 
TEST(PracticeTest, zzz_repeats) {
	Practice testObj;
	ASSERT_EQ(testObj.count_starting_repeats("zzz"), 3);
}

TEST(PracticeTest, aaaAa_repeats) {
	Practice testObj;
	ASSERT_EQ(testObj.count_starting_repeats("aaaAa"), 3);
}

TEST(PracticeTest, one_repeats) {
	Practice testObj;
	ASSERT_EQ(testObj.count_starting_repeats("one"), 1);
}

TEST(PracticeTest, aa_space_repeats) {
	Practice testObj;
	ASSERT_EQ(testObj.count_starting_repeats("aa aa"), 2);
}

// ----------- void sortDescending(int & first, int & second, int & third); ----------- 
TEST(PracticeTest, descending_321) {
	Practice testObj;
	int first = 1;
	int second = 2;
	int third = 3;
	testObj.sortDescending(first, second, third);
	ASSERT_EQ(first, 3);
	ASSERT_EQ(second, 2);
	ASSERT_EQ(third, 1);
}

TEST(PracticeTest, descending_544) {
	Practice testObj;
	int first = 4;
	int second = 4;
	int third = 5;
	testObj.sortDescending(first, second, third);
	ASSERT_EQ(first, 5);
	ASSERT_EQ(second, 4);
	ASSERT_EQ(third, 4);
}

TEST(PracticeTest, descending_654) {
	Practice testObj;
	int first = 6;
	int second = 5;
	int third = 4;
	testObj.sortDescending(first, second, third);
	ASSERT_EQ(first, 6);
	ASSERT_EQ(second, 5);
	ASSERT_EQ(third, 4);
}

TEST(PracticeTest, descending_402) {
	Practice testObj;
	int first = 402;
	int second = 400;
	int third = 401;
	testObj.sortDescending(first, second, third);
	ASSERT_EQ(first, 402);
	ASSERT_EQ(second, 401);
	ASSERT_EQ(third, 400);
}

// ----------- bool isPalindrome(string input); ----------- 
TEST(PracticeTest, adada_string) {
	Practice testObj;
	ASSERT_EQ(testObj.isPalindrome("adada"), true);
}

TEST(PracticeTest, appA_string) {
	Practice testObj;
	ASSERT_EQ(testObj.isPalindrome("appA"), true);
}

TEST(PracticeTest, deede_string) {
	Practice testObj;
	ASSERT_EQ(testObj.isPalindrome("deede"), false);
}

TEST(PracticeTest, t_string) {
	Practice testObj;
	ASSERT_EQ(testObj.isPalindrome("t"), true);
}
