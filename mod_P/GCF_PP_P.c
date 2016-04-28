//НОД многочленов
//Дудко Кирилл, группа 5307

POLYNOMIAL GCF_PP_P(POLYNOMIAL a, POLYNOMIAL b)
{
	POLYNOMIAL x;
	do
	{
		if (DEG_P_N(a) < DEG_P_N(b)) // Если старшая степень второго больше, то меняем их местами
		{
			x = a;
			a = b;
			b = x;
		}
		a = MOV_PP_P(a, b);        // Заменяем больший многочлен, на остаток от деления большего на меньший
	}
	while(DEG_P_N(a));             // Выполняем, пока не получится константа
	if (*a.factors->numerator.number == 0)  // Если полученная константа равна нулю, то многочлен 
		x = b;								// b который остался и есть НОД первоначальных многочленов
	else
	{
		x.degree = 0;                      // Если полученная константа не равна нулю, то НОД первоначальных многочленов = 1.
		x.factors->numerator.number = new int[1];
		*x.factors->numerator.number = 1;
	}
	return x;
}
