#include "gtest/gtest.h"

extern "C"
{
	int FUNCAO_BUSCA(const int v[], int tam, int buscado);
}

TEST(FUNCAO_BUSCA, ArrayVazio)
{
	ASSERT_EQ(-1, FUNCAO_BUSCA(NULL, 0, 1));
}

TEST(FUNCAO_BUSCA, ArrayUmElementoBuscadoExiste)
{
	int v[] = { 37 };
	ASSERT_EQ(0, FUNCAO_BUSCA(v, sizeof(v)/sizeof(int), 37));
}

TEST(FUNCAO_BUSCA, ArrayUmElementoBuscadoNaoExisteMenor)
{
	int v[] = { 37 };
	ASSERT_EQ(-1, FUNCAO_BUSCA(v, sizeof(v)/sizeof(int), 13));
}

TEST(FUNCAO_BUSCA, ArrayUmElementoBuscadoNaoExisteMaior)
{
	int v[] = { 37 };
	ASSERT_EQ(-1, FUNCAO_BUSCA(v, sizeof(v)/sizeof(int), 1337));
}

TEST(FUNCAO_BUSCA, ArrayDoisElementosBuscadoExistePrimeiro)
{
	int v[] = { 13, 37 };
	ASSERT_EQ(0, FUNCAO_BUSCA(v, sizeof(v)/sizeof(int), 13));
}

TEST(FUNCAO_BUSCA, ArrayDoisElementosBuscadoExisteSegundo)
{
	int v[] = { 13, 37 };
	ASSERT_EQ(1, FUNCAO_BUSCA(v, sizeof(v)/sizeof(int), 37));
}

TEST(FUNCAO_BUSCA, ArrayDoisElementosBuscadoNaoExisteMenor)
{
	int v[] = { 13, 37 };
	ASSERT_EQ(-1, FUNCAO_BUSCA(v, sizeof(v)/sizeof(int), 3));
}

TEST(FUNCAO_BUSCA, ArrayDoisElementosBuscadoNaoExisteMeio)
{
	int v[] = { 13, 37 };
	ASSERT_EQ(-1, FUNCAO_BUSCA(v, sizeof(v)/sizeof(int), 31));
}

TEST(FUNCAO_BUSCA, ArrayDoisElementosBuscadoNaoExisteMaior)
{
	int v[] = { 13, 37 };
	ASSERT_EQ(-1, FUNCAO_BUSCA(v, sizeof(v)/sizeof(int), 1337));
}

TEST(FUNCAO_BUSCA, ArrayTresElementosBuscadoExistePrimeiro)
{
	int v[] = { 3, 13, 37 };
	ASSERT_EQ(0, FUNCAO_BUSCA(v, sizeof(v)/sizeof(int), 3));
}

TEST(FUNCAO_BUSCA, ArrayTresElementosBuscadoExisteSegundo)
{
	int v[] = { 3, 13, 37 };
	ASSERT_EQ(1, FUNCAO_BUSCA(v, sizeof(v)/sizeof(int), 13));
}

TEST(FUNCAO_BUSCA, ArrayTresElementosBuscadoExisteTerceiro)
{
	int v[] = { 3, 13, 37 };
	ASSERT_EQ(2, FUNCAO_BUSCA(v, sizeof(v)/sizeof(int), 37));
}

TEST(FUNCAO_BUSCA, ArrayTresElementosBuscadoNaoExisteInicio)
{
	int v[] = { 3, 13, 37 };
	ASSERT_EQ(-1, FUNCAO_BUSCA(v, sizeof(v)/sizeof(int), 0));
}

TEST(FUNCAO_BUSCA, ArrayTresElementosBuscadoNaoExisteMeio1)
{
	int v[] = { 3, 13, 37 };
	ASSERT_EQ(-1, FUNCAO_BUSCA(v, sizeof(v)/sizeof(int), 7));
}

TEST(FUNCAO_BUSCA, ArrayTresElementosBuscadoNaoExisteMeio2)
{
	int v[] = { 3, 13, 37 };
	ASSERT_EQ(-1, FUNCAO_BUSCA(v, sizeof(v)/sizeof(int), 31));
}

TEST(FUNCAO_BUSCA, ArrayTresElementosBuscadoNaoExisteFim)
{
	int v[] = { 3, 13, 37 };
	ASSERT_EQ(-1, FUNCAO_BUSCA(v, sizeof(v)/sizeof(int), 1337));
}

TEST(FUNCAO_BUSCA, ArrayQuatroElementosBuscadoExistePrimeiro)
{
	int v[] = { 3, 13, 37, 137 };
	ASSERT_EQ(0, FUNCAO_BUSCA(v, sizeof(v)/sizeof(int), 3));
}

TEST(FUNCAO_BUSCA, ArrayQuatroElementosBuscadoExisteSegundo)
{
	int v[] = { 3, 13, 37, 137 };
	ASSERT_EQ(1, FUNCAO_BUSCA(v, sizeof(v)/sizeof(int), 13));
}

TEST(FUNCAO_BUSCA, ArrayQuatroElementosBuscadoExisteTerceiro)
{
	int v[] = { 3, 13, 37, 137 };
	ASSERT_EQ(2, FUNCAO_BUSCA(v, sizeof(v)/sizeof(int), 37));
}

TEST(FUNCAO_BUSCA, ArrayQuatroElementosBuscadoExisteQuarto)
{
	int v[] = { 3, 13, 37, 137 };
	ASSERT_EQ(3, FUNCAO_BUSCA(v, sizeof(v)/sizeof(int), 137));
}

TEST(FUNCAO_BUSCA, ArrayQuatroElementosBuscadoNaoExisteInicio)
{
	int v[] = { 3, 13, 37, 137 };
	ASSERT_EQ(-1, FUNCAO_BUSCA(v, sizeof(v)/sizeof(int), 0));
}

TEST(FUNCAO_BUSCA, ArrayQuatroElementosBuscadoNaoExisteMeio1)
{
	int v[] = { 3, 13, 37, 137 };
	ASSERT_EQ(-1, FUNCAO_BUSCA(v, sizeof(v)/sizeof(int), 7));
}

TEST(FUNCAO_BUSCA, ArrayQuatroElementosBuscadoNaoExisteMeio2)
{
	int v[] = { 3, 13, 37, 137 };
	ASSERT_EQ(-1, FUNCAO_BUSCA(v, sizeof(v)/sizeof(int), 31));
}

TEST(FUNCAO_BUSCA, ArrayQuatroElementosBuscadoNaoExisteMeio3)
{
	int v[] = { 3, 13, 37, 137 };
	ASSERT_EQ(-1, FUNCAO_BUSCA(v, sizeof(v)/sizeof(int), 73));
}

TEST(FUNCAO_BUSCA, ArrayQuatroElementosBuscadoNaoExisteFim)
{
	int v[] = { 3, 13, 37, 137 };
	ASSERT_EQ(-1, FUNCAO_BUSCA(v, sizeof(v)/sizeof(int), 1337));
}

TEST(FUNCAO_BUSCA, ArrayCincoElementosBuscadoExistePrimeiro)
{
	int v[] = { 3, 13, 37, 137, 1337 };
	ASSERT_EQ(0, FUNCAO_BUSCA(v, sizeof(v)/sizeof(int), 3));
}

TEST(FUNCAO_BUSCA, ArrayCincoElementosBuscadoExisteSegundo)
{
	int v[] = { 3, 13, 37, 137, 1337 };
	ASSERT_EQ(1, FUNCAO_BUSCA(v, sizeof(v)/sizeof(int), 13));
}

TEST(FUNCAO_BUSCA, ArrayCincoElementosBuscadoExisteTerceiro)
{
	int v[] = { 3, 13, 37, 137, 1337 };
	ASSERT_EQ(2, FUNCAO_BUSCA(v, sizeof(v)/sizeof(int), 37));
}

TEST(FUNCAO_BUSCA, ArrayCincoElementosBuscadoExisteQuarto)
{
	int v[] = { 3, 13, 37, 137, 1337 };
	ASSERT_EQ(3, FUNCAO_BUSCA(v, sizeof(v)/sizeof(int), 137));
}

TEST(FUNCAO_BUSCA, ArrayCincoElementosBuscadoExisteQuinto)
{
	int v[] = { 3, 13, 37, 137, 1337 };
	ASSERT_EQ(4, FUNCAO_BUSCA(v, sizeof(v)/sizeof(int), 1337));
}

TEST(FUNCAO_BUSCA, ArrayCincoElementosBuscadoNaoExisteInicio)
{
	int v[] = { 3, 13, 37, 137, 1337 };
	ASSERT_EQ(-1, FUNCAO_BUSCA(v, sizeof(v)/sizeof(int), 0));
}

TEST(FUNCAO_BUSCA, ArrayCincoElementosBuscadoNaoExisteMeio1)
{
	int v[] = { 3, 13, 37, 137, 1337 };
	ASSERT_EQ(-1, FUNCAO_BUSCA(v, sizeof(v)/sizeof(int), 7));
}

TEST(FUNCAO_BUSCA, ArrayCincoElementosBuscadoNaoExisteMeio2)
{
	int v[] = { 3, 13, 37, 137, 1337 };
	ASSERT_EQ(-1, FUNCAO_BUSCA(v, sizeof(v)/sizeof(int), 31));
}

TEST(FUNCAO_BUSCA, ArrayCincoElementosBuscadoNaoExisteMeio3)
{
	int v[] = { 3, 13, 37, 137, 1337 };
	ASSERT_EQ(-1, FUNCAO_BUSCA(v, sizeof(v)/sizeof(int), 73));
}

TEST(FUNCAO_BUSCA, ArrayCincoElementosBuscadoNaoExisteMeio4)
{
	int v[] = { 3, 13, 37, 137, 1337 };
	ASSERT_EQ(-1, FUNCAO_BUSCA(v, sizeof(v)/sizeof(int), 731));
}

TEST(FUNCAO_BUSCA, ArrayCincoElementosBuscadoNaoExisteFim)
{
	int v[] = { 3, 13, 37, 137, 1337 };
	ASSERT_EQ(-1, FUNCAO_BUSCA(v, sizeof(v)/sizeof(int), 31337));
}

TEST(FUNCAO_BUSCA, ArraySeisACemElementos)
{
	int v[100];
	int i, j;

	for (i = 6; i <= sizeof(v)/sizeof(i); i++)
	{
		for (j = 0; j < i; j++)
		{
			v[j] = 2*(j+1);
		}

		// Busca todos os elementos no array
		for (j = 0; j < i; j++)
		{
			ASSERT_EQ(j, FUNCAO_BUSCA(v, i, v[j]));
		}

		// Busca elementos que nao existem em todas as posicoes possiveis no array
		// (inicio, fim, e entre cada par de elementos)
		for (j = 0; j <= i; j++)
		{
			ASSERT_EQ(-1, FUNCAO_BUSCA(v, i, 2*j + 1));
		}
	}
}
