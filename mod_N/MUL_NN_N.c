//Умножение натуральных чисел
//Власов Д.Ю 5307
NATURAL MUL_NN_N(NATURAL num1, NATURAL num2)
{
	int add = 0; //Добавочное значение
	int	buffer;	 //Значение разряда до следующего изменения
	int j, i;
	NATURAL NewNum; //Произведение двух чисел
	NewNum.number = (int*)malloc((num1.index+num2.index)*sizeof(int));
	NewNum.index = num1.index + num2.index;
	for (i = 0; i < NewNum.index; i++)
		NewNum.number[i] = 0;
	for (i = 0; i < num1.index; i++)
	{
		add = 0;
		for (j = 0; j < num2.index; j++)
		{
			buffer = NewNum.number[j + i];
			//Возможность подключения модуля MUL_ND_N
			NewNum.number[j + i] = (NewNum.number[j + i] + (num2.number[j] * num1.number[i] % 10) + add) % 10;
			add = (buffer + (num2.number[j] * num1.number[i]) + add) /10;
		}
		NewNum.number[j + i] = add;
	}
	return NewNum;
}