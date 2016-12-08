﻿//Умножение многочленов

//Джурумбаева 5307

#include ADD_QQ_Q.c
#include MUL_P_Q.c
#include MUL_Pxk_P.c

POLYNOMIAL MUL_PP_P(POLYNOMIAL * a, POLYNOMIAL * b)
{
	struct POLYNOMIAL product;
	int i = 0;

	product.degree = a->degree + b->degree;
	product.factors = (RATIONAL*)calloc(product.degree, sizeof(RATIONAL));

	while (i < (b->degree + 1))
		product.factors = ADD_QQ_Q(product.factors, MUL_P_Q(MUL_Pxk_P(a->factors, i), b->factors[i++]));

	return product;
}