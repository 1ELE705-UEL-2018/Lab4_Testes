#include "gtest/gtest.h"

extern "C"
{
	double FUNCAO_CALCULO_POLINOMIO(const double coefs[], int ordem, double x);
}

TEST(FUNCAO_CALCULO_POLINOMIO, PolinomioNuloX0)
{
	double coefs[] = { 0.0 };
	ASSERT_NEAR(0.0, FUNCAO_CALCULO_POLINOMIO(coefs, 0, 0.0), 1e-10);
}

TEST(FUNCAO_CALCULO_POLINOMIO, PolinomioNuloX1)
{
	double coefs[] = { 0.0 };
	ASSERT_NEAR(0.0, FUNCAO_CALCULO_POLINOMIO(coefs, 0, 1.0), 1e-10);
}

TEST(FUNCAO_CALCULO_POLINOMIO, PolinomioConstanteX0)
{
	double coefs[] = { 1.0 };
	ASSERT_NEAR(1.0, FUNCAO_CALCULO_POLINOMIO(coefs, 0, 0.0), 1e-10);
}

TEST(FUNCAO_CALCULO_POLINOMIO, PolinomioConstanteX1)
{
	double coefs[] = { 1.0 };
	ASSERT_NEAR(1.0, FUNCAO_CALCULO_POLINOMIO(coefs, 0, 1.0), 1e-10);
}

TEST(FUNCAO_CALCULO_POLINOMIO, PolinomioLinearX0)
{
	double coefs[] = { 1.0, 1.0 };
	ASSERT_NEAR(1.0, FUNCAO_CALCULO_POLINOMIO(coefs, 1, 0.0), 1e-10);
}

TEST(FUNCAO_CALCULO_POLINOMIO, PolinomioLinearX2)
{
	double coefs[] = { 1.0, 1.0 };
	ASSERT_NEAR(3.0, FUNCAO_CALCULO_POLINOMIO(coefs, 1, 2.0), 1e-10);
}

TEST(FUNCAO_CALCULO_POLINOMIO, PolinomioLinearXm1)
{
	double coefs[] = { 1.0, 1.0 };
	ASSERT_NEAR(0.0, FUNCAO_CALCULO_POLINOMIO(coefs, 1, -1.0), 1e-10);
}

TEST(FUNCAO_CALCULO_POLINOMIO, PolinomioQuadraticoX2)
{
	double coefs[] = { 3.0, 2.0, 1.0 };
	ASSERT_NEAR(11.0, FUNCAO_CALCULO_POLINOMIO(coefs, 2, 2.0), 1e-10);
}

TEST(FUNCAO_CALCULO_POLINOMIO, PolinomioCubicoXm1p5)
{
	double coefs[] = { 7.0, 3.0, 3.0, 1.0 };
	ASSERT_NEAR(5.875, FUNCAO_CALCULO_POLINOMIO(coefs, 3, -1.5), 1e-10);
}

TEST(FUNCAO_CALCULO_POLINOMIO, PolinomioQuarticoX0p5)
{
	double coefs[] = { -7.0, 3.0, -3.0, 1.0, -3.0 };
	ASSERT_NEAR(-6.3125, FUNCAO_CALCULO_POLINOMIO(coefs, 4, 0.5), 1e-10);
}