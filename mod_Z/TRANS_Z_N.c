//Преобразование целого неотрицательного в натуральное

//Икренникова Диана 5307

struct NATURAL TRANS_Z_N(struct INTEGER x)
{
 struct NATURAL y;
 y.number = (int*)malloc((x.index)*sizeof(int));
 y.index = x.index;
	for (int i = 0; i < y.index; i++) //скорее всего это и не нужно, но пусть пока будет
		y.number[i] = 0;
        for (int i = 0; i < y.index; i++)
		y.number[i] = x.number[i];
 
 return y;
}