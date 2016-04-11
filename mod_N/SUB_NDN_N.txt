//Вычитание из натурального другого натурального,
//умноженного на цифру
//для случая с неотрицательным результатом
//Дудко Кирилл, группа 5307


NATURAL SUB_NDN_N(NATURAL long1, NATURAL long2, int n)
{
	NATURAL test;
	if (COM_NN_D(long1, MUL_ND_N(long2, n)) == 2)//Сравнение long1 и n*long2, если long 1 больше, то 2, иначе 1 
		 test = SUB_NN_N(long1, MUL_ND_N(long2, n));//test=long1-n*long2
	else
		test = SUB_NN_N(long1, long2);//long1-long2
	return test;
}
