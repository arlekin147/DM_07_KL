﻿//Старший коэффициент многочлена


//multi - структура с массивом коэффициентов factors и старшей степенью degree
//функция возвращает старший коэффициент многочлена


RATIONAL LED_P_Z(struct POLYNOMIAL multi)
{
	return multi.factors[multi.degree];
}