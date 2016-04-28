//Добавление 1 к натуральному числу

Джурумбаева 5307

struct NATURAL ADD_1N_N(struct NATURAL original)
{
	struct NATURAL sum;
	int i = 0; 
	int nine = 1;
	int j = original.index;

	while (i < j && nine)
	{
		if (original.number[i] == 9)
		{
			sum.number[i++] = 0;

			if (i = j)
			{
				original.index = j + 1;
				original.number = (int*)realloc((original.index)*sizeof(int));
				original.number[i] = 0;
			}
		}
		else
		{
			original.number[i] += 1;
			nine = 0;
		}
	}
	
	return original;
}