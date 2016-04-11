//Вычисление первой цифры деления большего натурального на меньшее,
//домноженное на 10^k, где k - номер позиции этой цифры (номер считается с нуля)
// Кирилл Дудко, группа 5307

NATURAL DIV_NN_Dk(NATURAL long1, NATURAL long2, int k)
{
	int i;
	int x=0;
	int f=1;
	int y;
	int index;
	int INDEX;
	NATURAL test;
	if (COM_NN_D(long1, long2) == 1)//Сравнение long1 и long2, если long 1 больше, то 2, иначе 1 
	{
		test = long1;            //////////// Если long 2 больше
		long1 = long2;           //////////// то меняем long 1 и
		long2 = test;            //////////// long 2 местами
	}
	INDEX = long1.index - long2.index;      //Вычисляем максимальный возможный размер частного
	if (k<INDEX)                           // Проверяем заданный номер искомой цифры на то, что бы был не больше максимального
	{
		for (i = INDEX; i > k; i--)
		{
			index = long1.index - long2.index; //Вычисляем номер цифры, которую получим на данном этапе
			if (long1.number[long1.index - 1] > long2.number[long2.index - 1]) //Проверяем, что бы цифра старшего разряда первого числа  
			{														           // была больше цифры старшего разряда второго числа
				x = long1.number[long1.index - 1] / long2.number[long2.index - 1];      //Находим частное от деления цифр старших разрядов чисел
				if (COM_NN_D(MUL_ND_N(MUL_Nk_N(long2, index), x), long1) == 2)			//Если второе число умноженное на х больше первого					x--;															    //
				long1 = SUB_NN_N(long1, MUL_ND_N(MUL_Nk_N(long2, index), x));			//то уменьшаем х на один и делаем long1=long1-((long1*10^index)*x)
			}
			else                                                                     // Если же цифра старшего разряда первого числа меньше чем у второго числа
			{                                                                        // то находим частное от деления цифр двух старших разрядов первого числа
				x = (long1.number[long1.index - 1] * 10 + long1.number[long1.index - 2]) / long2.number[long2.index - 1];   //  на старший разряд второго и делаем то же самое
				if (COM_NN_D(MUL_ND_N(MUL_Nk_N(long2, index), x), long1) == 2)
					x--;
				long1 = SUB_NN_N(long1, MUL_ND_N(MUL_Nk_N(long2, index), x));
			}
		}
		test.index = 0;                      
		test.number = new int[1];
		*test.number = x;
		test = MUL_Nk_N(test, k);         // умножаем полученное число на 10^k
		return test;
	}
	else 
		printf("Ошибка!");
}
