#include "gtest/gtest.h"

extern "C"
{
	int FUNCAO_MDC(int a, int b);
}

TEST(FUNCAO_MDC, MDC_0_0)
{
	ASSERT_EQ(0, FUNCAO_MDC(0, 0));
}

TEST(FUNCAO_MDC, MDC_1_0)
{
	ASSERT_EQ(1, FUNCAO_MDC(1, 0));
}

TEST(FUNCAO_MDC, MDC_0_2)
{
	ASSERT_EQ(2, FUNCAO_MDC(0, 2));
}

TEST(FUNCAO_MDC, MDC_2_1)
{
	ASSERT_EQ(1, FUNCAO_MDC(2, 1));
}

TEST(FUNCAO_MDC, MDC_2_4)
{
	ASSERT_EQ(2, FUNCAO_MDC(2*1, 2*2));
}

TEST(FUNCAO_MDC, MDC_9_6)
{
	ASSERT_EQ(3, FUNCAO_MDC(3*3, 3*2));
}

TEST(FUNCAO_MDC, MDC8_8)
{
	ASSERT_EQ(2*2*2, FUNCAO_MDC(2*2*2, 2*2*2));
}

TEST(FUNCAO_MDC, MDC_18_27)
{
	ASSERT_EQ(3*3, FUNCAO_MDC(3*3*2, 3*3*3));
}

TEST(FUNCAO_MDC, MDC_41897569_229731547)
{
	ASSERT_EQ(31337, FUNCAO_MDC(31337*1337, 31337*7331));
}

TEST(FUNCAO_MDC, MDC_223092870_281291010)
{
	ASSERT_EQ(2*3*5*7*11*13*17*19, FUNCAO_MDC(2*3*5*7*11*13*17*19*23, 2*3*5*7*11*13*17*19*29));
}