//Сахаров Илья Владимирович 5307
//Определение положительности числа
//(1 - положительное, 0 — равное нулю, -1 - отрицательное)
int POZ_Z_D(INTEGER taken)
{
	int pos =	0;
	if(taken.number != 0)
	{
		 if (taken.sign == 0)
			 pos = 1;
		 else
			 pos = -1;
	}

	return pos;
}