//Преобразование дробного в целое (если знаменатель равен 1)

//Икренникова Диана 5307

struct INTEGER TRANS_Z_Q(struct RATIONAL x)
{
 struct INTEGER y;
 y.number = (int*)malloc((x.numerator.index)*sizeof(int));
 y.index = x.numerator.index;
	for (int i = 0; i < y.index; i++) //скорее всего это и не нужно, но пусть пока будет
		y.number[i] = 0;
        for (int i = 0; i < y.index; i++)
		y.number[i] = x.numerator.number[i];
 
 y.sign = x.sing;
 
 return y;
}