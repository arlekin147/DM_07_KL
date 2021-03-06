﻿//Остаток от деления большего натурального числа на меньшее
// или равное натуральное с остатком (делитель отличен от нуля)

---
Правиленко Михаил гр. 5307
Pre-Alpha
---

Используемые модули:
DIV_NN_N
SUB_NDN_N

struct NATURAL MOD_NN_N(struct NATURAL a, struct NATURAL b)
{
	struct NATURAL div;     //Частное
	struct NATURAL mod;     //Остаток
	struct NATURAL factor;  //Множитель цифр частного
	int *resize;            //Временное хранение чисел

	div.index = a.index-b.index+1;
	div.number = new int [div.index];

	div = DIV_NN_N(a, b);

	resize = new int [a.index];          //Отсечение пустых элементов div
	for (int i=0; i<div.index; i++)
		resize[i]=div.number[i];
	delete [] div.number;
	div.number = nullptr;
	div.number = new int [div.index];
	for (int i=0; i<div.index; i++)
		div.number[i]=resize[i];

	factor.index = b.index;
	factor.number = new int [factor.index];
	for (int i=0; i<factor.index; i++)
		factor.number[i] = b.number[i];

	mod.index = a.index;
	mod.number = new int [mod.index];

	for (int i=0; i<div.index; i++)
	{
		if (i>0)
		{
			factor.index = factor.index + i;   //Умножение делителя на 10^i
			for (int j=0; j<factor.index; j++)
				resize[j] = factor.number[j];
			delete [] factor.number;
			factor.number = nullptr;
			factor.number = new int [factor.index];
			factor.number[0] = 0;
			for (int j=0; j<factor.index; j++)
				factor.number[j+1] = resize[j];
		}
		mod = SUB_NDN_N(mod, factor, div.number[i]);
	}

	delete [] resize;            //Отсечение пустых элементов mod
	resize = nullptr;
	resize = new int [mod.index];
	for (int i=0; i<mod.index; i++)
		resize[i]=mod.number[i];
	delete [] mod.number;
	mod.number = nullptr;
	mod.number = new int [mod.index];
	for (int i=0; i<div.index; i++)
		mod.number[i]=resize[i];

	return mod;
}