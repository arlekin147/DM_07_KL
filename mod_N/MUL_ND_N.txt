//Умножение натурального числа на цифру

Джурумбаева 5307

struct NATURAL MUL_ND_N(struct NATURAL original, int digit) 
{
	struct NATURAL product;

	if (!digit)
	{
		product.index = 1;
		product.number = (int*)calloc(product.index, sizeof(int));
		return product;
	}
	else
	{
		int tmp;
		int i = 0;

		product.index = original.index + 1;
		product.number = (int*)calloc(product.index, sizeof(int));

		while (i < original.index)
		{
			tmp = original.number[i] * digit;
			product.number[i] += tmp % 10;
			product.number[++i] += tmp / 10;
		}

		if (!product.number[original.index])
			product.index--;

		return product;
	}
}