//Умножение натурального числа на 10^k
//Власов Д.Ю 5307
NATURAL MUL_Nk_N(NATURAL num, int k)
{
	NATURAL NewNum;
	NewNum.index = num.index + k;
	NewNum.number=(int*)malloc(NewNum.index*sizeof(int));
	for (int i = 0; i < k; i++)
		NewNum.number[i] = 0;
	for (int i = k; i < NewNum.index; i++)
		NewNum.number[i] = num.number[i - k];
	return NewNum;
}