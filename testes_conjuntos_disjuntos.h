#include "gtest/gtest.h"

extern "C"
{
	int FUNCAO_CONJUNTOS_DISJUNTOS(const int conj1[], int tam1, const int conj2[], int tam2);
}

TEST(FUNCAO_CONJUNTOS_DISJUNTOS, ConjuntosVazios)
{
	ASSERT_EQ(1, FUNCAO_CONJUNTOS_DISJUNTOS(NULL, 0, NULL, 0));
}

TEST(FUNCAO_CONJUNTOS_DISJUNTOS, UmElementoVazio)
{
	int conj1[1] = { 0 };

	ASSERT_EQ(1, FUNCAO_CONJUNTOS_DISJUNTOS(conj1, sizeof(conj1)/sizeof(int), NULL, 0));
}

TEST(FUNCAO_CONJUNTOS_DISJUNTOS, VazioUmElemento)
{
	int conj2[1] = { 0 };

	ASSERT_EQ(1, FUNCAO_CONJUNTOS_DISJUNTOS(NULL, 0, conj2, sizeof(conj2)/sizeof(int)));
}

TEST(FUNCAO_CONJUNTOS_DISJUNTOS, AmbosUmElementoDiferentes)
{
	int conj1[1] = { 0 };
	int conj2[1] = { 1 };

	ASSERT_EQ(1, FUNCAO_CONJUNTOS_DISJUNTOS(conj1, sizeof(conj1)/sizeof(int), conj2, sizeof(conj2)/sizeof(int)));
}

TEST(FUNCAO_CONJUNTOS_DISJUNTOS, AmbosUmElementoIguais)
{
	int conj1[1] = { 0 };
	int conj2[1] = { 0 };

	ASSERT_EQ(0, FUNCAO_CONJUNTOS_DISJUNTOS(conj1, sizeof(conj1)/sizeof(int), conj2, sizeof(conj2)/sizeof(int)));
}

TEST(FUNCAO_CONJUNTOS_DISJUNTOS, DoisElementosUmElemento1)
{
	int conj1[2] = { 0, 1 };
	int conj2[1] = { 0 };

	ASSERT_EQ(0, FUNCAO_CONJUNTOS_DISJUNTOS(conj1, sizeof(conj1)/sizeof(int), conj2, sizeof(conj2)/sizeof(int)));
}

TEST(FUNCAO_CONJUNTOS_DISJUNTOS, DoisElementosUmElemento2)
{
	int conj1[2] = { 0, 1 };
	int conj2[1] = { 1 };

	ASSERT_EQ(0, FUNCAO_CONJUNTOS_DISJUNTOS(conj1, sizeof(conj1)/sizeof(int), conj2, sizeof(conj2)/sizeof(int)));
}

TEST(FUNCAO_CONJUNTOS_DISJUNTOS, DoisElementosUmElemento3)
{
	int conj1[2] = { 0, 2 };
	int conj2[1] = { 1 };

	ASSERT_EQ(1, FUNCAO_CONJUNTOS_DISJUNTOS(conj1, sizeof(conj1)/sizeof(int), conj2, sizeof(conj2)/sizeof(int)));
}

TEST(FUNCAO_CONJUNTOS_DISJUNTOS, DoisElementosUmElemento4)
{
	int conj1[2] = { 1, 2 };
	int conj2[1] = { 0 };

	ASSERT_EQ(1, FUNCAO_CONJUNTOS_DISJUNTOS(conj1, sizeof(conj1)/sizeof(int), conj2, sizeof(conj2)/sizeof(int)));
}

TEST(FUNCAO_CONJUNTOS_DISJUNTOS, DoisElementosUmElemento5)
{
	int conj1[2] = { 0, 1 };
	int conj2[1] = { 2 };

	ASSERT_EQ(1, FUNCAO_CONJUNTOS_DISJUNTOS(conj1, sizeof(conj1)/sizeof(int), conj2, sizeof(conj2)/sizeof(int)));
}

TEST(FUNCAO_CONJUNTOS_DISJUNTOS, AmbosTresElementosIdenticos)
{
	int conj1[3] = { 1, 3, 7 };
	int conj2[3] = { 1, 3, 7 };

	ASSERT_EQ(0, FUNCAO_CONJUNTOS_DISJUNTOS(conj1, sizeof(conj1)/sizeof(int), conj2, sizeof(conj2)/sizeof(int)));
}

TEST(FUNCAO_CONJUNTOS_DISJUNTOS, AmbosTresElementosDisjuntos)
{
	int conj1[3] = { 0, 5, 7 };
	int conj2[3] = { 1, 3, 9 };

	ASSERT_EQ(1, FUNCAO_CONJUNTOS_DISJUNTOS(conj1, sizeof(conj1)/sizeof(int), conj2, sizeof(conj2)/sizeof(int)));
}

TEST(FUNCAO_CONJUNTOS_DISJUNTOS, AmbosTresElementosNaoDisjuntos)
{
	int conj1[3] = { 1, 3, 7 };
	int conj2[3] = { 0, 4, 7 };

	ASSERT_EQ(0, FUNCAO_CONJUNTOS_DISJUNTOS(conj1, sizeof(conj1)/sizeof(int), conj2, sizeof(conj2)/sizeof(int)));
}

TEST(FUNCAO_CONJUNTOS_DISJUNTOS, DezElementosSeteElementosDisjuntos)
{
	int conj1[10] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29  };
	int conj2[7]  = { 1, 4, 6, 8, 16, 24, 32 };

	ASSERT_EQ(1, FUNCAO_CONJUNTOS_DISJUNTOS(conj1, sizeof(conj1)/sizeof(int), conj2, sizeof(conj2)/sizeof(int)));
}

TEST(FUNCAO_CONJUNTOS_DISJUNTOS, DezElementosSeteElementosNaoDisjuntos)
{
	int conj1[10] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 };
	int conj2[7]  = { 2, 4, 6, 8, 16, 24, 32 };

	ASSERT_EQ(0, FUNCAO_CONJUNTOS_DISJUNTOS(conj1, sizeof(conj1)/sizeof(int), conj2, sizeof(conj2)/sizeof(int)));
}

TEST(FUNCAO_CONJUNTOS_DISJUNTOS, CincoElementosOitoElementosDisjuntos)
{
	int conj1[5] = { 2, 3, 5, 7, 11 };
	int conj2[8] = { 13, 17, 19, 23, 29, 31, 37, 41 };

	ASSERT_EQ(1, FUNCAO_CONJUNTOS_DISJUNTOS(conj1, sizeof(conj1)/sizeof(int), conj2, sizeof(conj2)/sizeof(int)));
}

TEST(FUNCAO_CONJUNTOS_DISJUNTOS, CincoElementosOitoElementosNaoDisjuntos)
{
	int conj1[5] = { 2, 5, 11, 13, 29 };
	int conj2[8] = { 3, 7, 11, 17, 23, 29, 31, 37 };

	ASSERT_EQ(0, FUNCAO_CONJUNTOS_DISJUNTOS(conj1, sizeof(conj1)/sizeof(int), conj2, sizeof(conj2)/sizeof(int)));
}

TEST(FUNCAO_CONJUNTOS_DISJUNTOS, QuatroElementosOitoElementosDisjuntos)
{
	int conj1[4] = { 23, 29, 31, 37 };
	int conj2[8] = { 2, 3, 5, 7, 11, 13, 17, 19 };

	ASSERT_EQ(1, FUNCAO_CONJUNTOS_DISJUNTOS(conj1, sizeof(conj1)/sizeof(int), conj2, sizeof(conj2)/sizeof(int)));
}

TEST(FUNCAO_CONJUNTOS_DISJUNTOS, QuatroElementosOitoElementosNaoDisjuntos)
{
	int conj1[4] = { 19, 23, 29, 31 };
	int conj2[8] = { 2, 3, 5, 7, 11, 13, 17, 19 };

	ASSERT_EQ(0, FUNCAO_CONJUNTOS_DISJUNTOS(conj1, sizeof(conj1)/sizeof(int), conj2, sizeof(conj2)/sizeof(int)));
}

TEST(FUNCAO_CONJUNTOS_DISJUNTOS, NoveElementosCincoElementosDisjuntos)
{
	int conj1[9] = { 2, 3, 5, 13, 17, 19, 23, 31, 41 };
	int conj2[5] = { 7, 11, 29, 37, 43 };

	ASSERT_EQ(1, FUNCAO_CONJUNTOS_DISJUNTOS(conj1, sizeof(conj1)/sizeof(int), conj2, sizeof(conj2)/sizeof(int)));
}

TEST(FUNCAO_CONJUNTOS_DISJUNTOS, NoveElementosCincoElementosNaoDisjuntos)
{
	int conj1[9] = { 2, 3, 5, 13, 17, 19, 23, 31, 41 };
	int conj2[5] = { 7, 11, 29, 37, 41 };

	ASSERT_EQ(0, FUNCAO_CONJUNTOS_DISJUNTOS(conj1, sizeof(conj1)/sizeof(int), conj2, sizeof(conj2)/sizeof(int)));
}