#include "gtest/gtest.h"
#include "aux_test_functions.h"

extern "C"
{
	void FUNCAO_MARCA_PRIMOS(char v[], int limite);
}

TEST(FUNCAO_MARCA_PRIMOS, Limite0)
{
	char v_expected[1] = { 0 };
	char v[sizeof(v_expected)];

	FUNCAO_MARCA_PRIMOS(v, sizeof(v_expected) - 1);

	ASSERT_TRUE(ArraysMatch(v_expected, v));
}

TEST(FUNCAO_MARCA_PRIMOS, Limite1)
{
	char v_expected[2] = { 0, 0 };
	char v[sizeof(v_expected)];

	FUNCAO_MARCA_PRIMOS(v, sizeof(v_expected) - 1);

	ASSERT_TRUE(ArraysMatch(v_expected, v));
}

TEST(FUNCAO_MARCA_PRIMOS, Limite2)
{
	char v_expected[3] = { 0, 0, 1 };
	char v[sizeof(v_expected)];

	FUNCAO_MARCA_PRIMOS(v, sizeof(v_expected) - 1);

	ASSERT_TRUE(ArraysMatch(v_expected, v));
}

TEST(FUNCAO_MARCA_PRIMOS, Limite3)
{
	char v_expected[4] = { 0, 0, 1, 1 };
	char v[sizeof(v_expected)];

	FUNCAO_MARCA_PRIMOS(v, sizeof(v_expected) - 1);

	ASSERT_TRUE(ArraysMatch(v_expected, v));
}

TEST(FUNCAO_MARCA_PRIMOS, Limite4)
{
	char v_expected[5] = { 0, 0, 1, 1, 0 };
	char v[sizeof(v_expected)];

	FUNCAO_MARCA_PRIMOS(v, sizeof(v_expected) - 1);

	ASSERT_TRUE(ArraysMatch(v_expected, v));
}

TEST(FUNCAO_MARCA_PRIMOS, Limite9)
{
	char v_expected[10] = { 0, 0, 1, 1, 0, 1, 0, 1, 0, 0 };
	char v[sizeof(v_expected)];

	FUNCAO_MARCA_PRIMOS(v, sizeof(v_expected) - 1);

	ASSERT_TRUE(ArraysMatch(v_expected, v));
}

TEST(FUNCAO_MARCA_PRIMOS, Limite17)
{
	char v_expected[18] = { 0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1 };
	char v[sizeof(v_expected)];

	FUNCAO_MARCA_PRIMOS(v, sizeof(v_expected) - 1);

	ASSERT_TRUE(ArraysMatch(v_expected, v));
}

TEST(FUNCAO_MARCA_PRIMOS, Limite31)
{
	char v_expected[32] =
	{
	// x0 x1 x2 x3 x4 x5 x6 x7 x8 x9
		0, 0, 1, 1, 0, 1, 0, 1, 0, 0, // 0x
		0, 1, 0, 1, 0, 0, 0, 1, 0, 1, // 1x
		0, 0, 0, 1, 0, 0, 0, 0, 0, 1, // 2x
		0, 1                          // 3x
	};
	char v[sizeof(v_expected)];

	FUNCAO_MARCA_PRIMOS(v, sizeof(v_expected) - 1);

	ASSERT_TRUE(ArraysMatch(v_expected, v));
}

TEST(FUNCAO_MARCA_PRIMOS, Limite49)
{
	char v_expected[50] =
	{
	// x0 x1 x2 x3 x4 x5 x6 x7 x8 x9
		0, 0, 1, 1, 0, 1, 0, 1, 0, 0, // 0x
		0, 1, 0, 1, 0, 0, 0, 1, 0, 1, // 1x
		0, 0, 0, 1, 0, 0, 0, 0, 0, 1, // 2x
		0, 1, 0, 0, 0, 0, 0, 1, 0, 0, // 3x
		0, 1, 0, 1, 0, 0, 0, 1, 0, 0, // 4x
	};
	char v[sizeof(v_expected)];

	FUNCAO_MARCA_PRIMOS(v, sizeof(v_expected) - 1);

	ASSERT_TRUE(ArraysMatch(v_expected, v));
}

TEST(FUNCAO_MARCA_PRIMOS, Limite121)
{
	char v_expected[122] =
	{
	// x0 x1 x2 x3 x4 x5 x6 x7 x8 x9
		0, 0, 1, 1, 0, 1, 0, 1, 0, 0, // 00x
		0, 1, 0, 1, 0, 0, 0, 1, 0, 1, // 01x
		0, 0, 0, 1, 0, 0, 0, 0, 0, 1, // 02x
		0, 1, 0, 0, 0, 0, 0, 1, 0, 0, // 03x
		0, 1, 0, 1, 0, 0, 0, 1, 0, 0, // 04x
		0, 0, 0, 1, 0, 0, 0, 0, 0, 1, // 05x
		0, 1, 0, 0, 0, 0, 0, 1, 0, 0, // 06x
		0, 1, 0, 1, 0, 0, 0, 0, 0, 1, // 07x
		0, 0, 0, 1, 0, 0, 0, 0, 0, 1, // 08x
		0, 0, 0, 0, 0, 0, 0, 1, 0, 0, // 09x
		0, 1, 0, 1, 0, 0, 0, 1, 0, 1, // 10x
		0, 0, 0, 1, 0, 0, 0, 0, 0, 0, // 11x
		0, 0                          // 12x
	};
	char v[sizeof(v_expected)];

	FUNCAO_MARCA_PRIMOS(v, sizeof(v_expected) - 1);

	ASSERT_TRUE(ArraysMatch(v_expected, v));
}