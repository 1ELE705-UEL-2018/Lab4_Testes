#include "gtest/gtest.h"
#include "aux_test_functions.h"
extern "C"
{
#include "aleatorio.h"
}

extern "C"
{
	void embaralhamento_simples(int v[], int tam);
}

TEST(embaralhamento_simples, ArrayTamanho1)
{
	int v_expected[1] = { 0 };
	int v[sizeof(v_expected)/sizeof(int)];

	aleatorio_seed(sizeof(v_expected)/sizeof(int));

	embaralhamento_simples(v, sizeof(v_expected)/sizeof(int));

	ASSERT_TRUE(ArraysMatch(v_expected, v));
}

TEST(embaralhamento_simples, ArrayTamanho2)
{
	int v_expected[2] = { 0, 1 };
	int v[sizeof(v_expected)/sizeof(int)];

	aleatorio_seed(sizeof(v_expected)/sizeof(int));

	embaralhamento_simples(v, sizeof(v_expected)/sizeof(int));

	ASSERT_TRUE(ArraysMatch(v_expected, v));
}

TEST(embaralhamento_simples, ArrayTamanho3)
{
	int v_expected[3] = { 0, 1, 2 };
	int v[sizeof(v_expected)/sizeof(int)];

	aleatorio_seed(sizeof(v_expected)/sizeof(int));

	embaralhamento_simples(v, sizeof(v_expected)/sizeof(int));

	ASSERT_TRUE(ArraysMatch(v_expected, v));
}

TEST(embaralhamento_simples, ArrayTamanho4)
{
	int v_expected[4] = { 2, 3, 0, 1 };
	int v[sizeof(v_expected)/sizeof(int)];

	aleatorio_seed(sizeof(v_expected)/sizeof(int));

	embaralhamento_simples(v, sizeof(v_expected)/sizeof(int));

	ASSERT_TRUE(ArraysMatch(v_expected, v));
}

TEST(embaralhamento_simples, ArrayTamanho5)
{
	int v_expected[5] = { 3, 4, 0, 2, 1 };
	int v[sizeof(v_expected)/sizeof(int)];

	aleatorio_seed(sizeof(v_expected)/sizeof(int));

	embaralhamento_simples(v, sizeof(v_expected)/sizeof(int));

	ASSERT_TRUE(ArraysMatch(v_expected, v));
}

TEST(embaralhamento_simples, ArrayTamanho6)
{
	int v_expected[6] = { 2, 3, 0, 4, 5, 1 };
	int v[sizeof(v_expected)/sizeof(int)];

	aleatorio_seed(sizeof(v_expected)/sizeof(int));

	embaralhamento_simples(v, sizeof(v_expected)/sizeof(int));

	ASSERT_TRUE(ArraysMatch(v_expected, v));
}

TEST(embaralhamento_simples, ArrayTamanho7)
{
	int v_expected[7] = { 1, 5, 0, 4, 6, 2, 3 };
	int v[sizeof(v_expected)/sizeof(int)];

	aleatorio_seed(sizeof(v_expected)/sizeof(int));

	embaralhamento_simples(v, sizeof(v_expected)/sizeof(int));

	ASSERT_TRUE(ArraysMatch(v_expected, v));
}

TEST(embaralhamento_simples, ArrayTamanho8)
{
	int v_expected[8] = { 2, 0, 6, 7, 4, 5, 1, 3 };
	int v[sizeof(v_expected)/sizeof(int)];

	aleatorio_seed(sizeof(v_expected)/sizeof(int));

	embaralhamento_simples(v, sizeof(v_expected)/sizeof(int));

	ASSERT_TRUE(ArraysMatch(v_expected, v));
}

TEST(embaralhamento_simples, ArrayTamanho9)
{
	int v_expected[9] = { 0, 2, 3, 8, 5, 4, 6, 1, 7 };
	int v[sizeof(v_expected)/sizeof(int)];

	aleatorio_seed(sizeof(v_expected)/sizeof(int));

	embaralhamento_simples(v, sizeof(v_expected)/sizeof(int));

	ASSERT_TRUE(ArraysMatch(v_expected, v));
}

TEST(embaralhamento_simples, ArrayTamanho10)
{
	int v_expected[10] = { 5, 2, 6, 8, 0, 4, 7, 1, 3, 9 };
	int v[sizeof(v_expected)/sizeof(int)];

	aleatorio_seed(sizeof(v_expected)/sizeof(int));

	embaralhamento_simples(v, sizeof(v_expected)/sizeof(int));

	ASSERT_TRUE(ArraysMatch(v_expected, v));
}