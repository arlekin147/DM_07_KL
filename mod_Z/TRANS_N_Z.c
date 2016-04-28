//Преобразование натурального в целое

//Икренникова Диана 5307

struct INTEGER TRANS_N_Z(struct NATURAL x)
{
 struct INTEGER y;
 y.number = (int*)malloc((x.index)*sizeof(int));
 y.index = x.index;
	for (int i = 0; i < y.index; i++) //скорее всего это и не нужно, но пусть пока будет
		y.number[i] = 0;
        for (int i = 0; i < y.index; i++)
		y.number[i] = x.number[i];
 y.sing = 0;
 
 return y;
}


