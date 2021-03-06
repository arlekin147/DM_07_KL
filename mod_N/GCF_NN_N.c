﻿//НОД натуральных чисел
/*
Подгружаемые модули:
COM_NN_D
NZER_N_B
MOD_NN_N

Изотов Андрей  5307
*/

struct NATURAL GCF_NN_N(struct NATURAL x, struct NATURAL y)
{
	struct NATURAL a;  //большее число
	struct NATURAL b;  //меньшее число
	struct NATURAL nod; 
	struct NATURAL mod; 
	int z;  //отвечает за сравнение чисел 
	int i;
	bool h = true;  //проверяет меньшее число на 0

	z = COM_NN_D(x, y); 
	if (z == 2)  // если x >= y
	{
		a = x;
		b = y;
	}
	if (z == 1)  // если x < y
	{
	     a = y; 
	     b = x;
	}
	do
	{
		h = NZER_N_B(b);
		if (h == false)  // если меньшее число равно 0
		{
			nod.index = a.index;
			nod.number = new int[nod.index];
			for (i = 0; i < a.index; i++)
				nod.number[i] = a.number[i];
		}
		else
		{
			mod = MOD_NN_N(a, b); 
			a = b;
			b = mod;
		}
	} while (h == true);
	return nod;
}
