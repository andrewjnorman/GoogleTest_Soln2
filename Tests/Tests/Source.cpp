#include "gtest\gtest.h"
#include "Program\Class1.h"
#include "src\gtest_main.cc"
#include "src\gtest-all.cc"



TEST(TestGroup, FirstGroup)
{
	Class1 y;

	int x = y.x;

	printf("x should equal 123 - actual value = %d\n", x);

	int z = y.fn_1();

	printf("z should equal 99 - actual value = %d\n", z);

	ASSERT_EQ(x, 123);
	
	ASSERT_EQ(z, 98);
}
