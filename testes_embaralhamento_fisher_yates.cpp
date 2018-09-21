#include "gtest/gtest.h"
#include "aux_test_functions.h"
extern "C"
{
#include "aleatorio.h"
}

extern "C"
{
	void embaralhamento_fisher_yates(int v[], int tam);
}

TEST(embaralhamento_fisher_yates, ArrayTamanho1)
{
	int v_expected[1] = { 0 };
	int v[sizeof(v_expected)/sizeof(int)];

	aleatorio_seed(sizeof(v_expected)/sizeof(int));

	embaralhamento_fisher_yates(v, sizeof(v_expected)/sizeof(int));

	ASSERT_TRUE(ArraysMatch(v_expected, v));
}

TEST(embaralhamento_fisher_yates, ArrayTamanho2)
{
	int v_expected[2] = { 0, 1 };
	int v[sizeof(v_expected)/sizeof(int)];

	aleatorio_seed(sizeof(v_expected)/sizeof(int));

	embaralhamento_fisher_yates(v, sizeof(v_expected)/sizeof(int));

	ASSERT_TRUE(ArraysMatch(v_expected, v));
}

TEST(embaralhamento_fisher_yates, ArrayTamanho3)
{
	int v_expected[3] = { 0, 2, 1 };
	int v[sizeof(v_expected)/sizeof(int)];

	aleatorio_seed(sizeof(v_expected)/sizeof(int));

	embaralhamento_fisher_yates(v, sizeof(v_expected)/sizeof(int));

	ASSERT_TRUE(ArraysMatch(v_expected, v));
}

TEST(embaralhamento_fisher_yates, ArrayTamanho4)
{
	int v_expected[4] = { 2, 0, 1, 3 };
	int v[sizeof(v_expected)/sizeof(int)];

	aleatorio_seed(sizeof(v_expected)/sizeof(int));

	embaralhamento_fisher_yates(v, sizeof(v_expected)/sizeof(int));

	ASSERT_TRUE(ArraysMatch(v_expected, v));
}

TEST(embaralhamento_fisher_yates, ArrayTamanho5)
{
	int v_expected[5] = { 3, 0, 1, 2, 4 };
	int v[sizeof(v_expected)/sizeof(int)];

	aleatorio_seed(sizeof(v_expected)/sizeof(int));

	embaralhamento_fisher_yates(v, sizeof(v_expected)/sizeof(int));

	ASSERT_TRUE(ArraysMatch(v_expected, v));
}

TEST(embaralhamento_fisher_yates, ArrayTamanho6)
{
	int v_expected[6] = { 2, 3, 0, 1, 4, 5 };
	int v[sizeof(v_expected)/sizeof(int)];

	aleatorio_seed(sizeof(v_expected)/sizeof(int));

	embaralhamento_fisher_yates(v, sizeof(v_expected)/sizeof(int));

	ASSERT_TRUE(ArraysMatch(v_expected, v));
}

TEST(embaralhamento_fisher_yates, ArrayTamanho7)
{
	int v_expected[7] = { 1, 0, 5, 4, 2, 3, 6 };
	int v[sizeof(v_expected)/sizeof(int)];

	aleatorio_seed(sizeof(v_expected)/sizeof(int));

	embaralhamento_fisher_yates(v, sizeof(v_expected)/sizeof(int));

	ASSERT_TRUE(ArraysMatch(v_expected, v));
}

TEST(embaralhamento_fisher_yates, ArrayTamanho8)
{
	int v_expected[8] = { 2, 5, 0, 7, 4, 3, 6, 1 };
	int v[sizeof(v_expected)/sizeof(int)];

	aleatorio_seed(sizeof(v_expected)/sizeof(int));

	embaralhamento_fisher_yates(v, sizeof(v_expected)/sizeof(int));

	ASSERT_TRUE(ArraysMatch(v_expected, v));
}

TEST(embaralhamento_fisher_yates, ArrayTamanho9)
{
	int v_expected[9] = { 0, 2, 1, 8, 4, 3, 6, 5, 7 };
	int v[sizeof(v_expected)/sizeof(int)];

	aleatorio_seed(sizeof(v_expected)/sizeof(int));

	embaralhamento_fisher_yates(v, sizeof(v_expected)/sizeof(int));

	ASSERT_TRUE(ArraysMatch(v_expected, v));
}

TEST(embaralhamento_fisher_yates, ArrayTamanho10)
{
	int v_expected[10] = { 5, 7, 4, 6, 2, 8, 3, 0, 1, 9 };
	int v[sizeof(v_expected)/sizeof(int)];

	aleatorio_seed(sizeof(v_expected)/sizeof(int));

	embaralhamento_fisher_yates(v, sizeof(v_expected)/sizeof(int));

	ASSERT_TRUE(ArraysMatch(v_expected, v));
}