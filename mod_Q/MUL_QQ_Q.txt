//Деление дробей (делитель отличен от нуля)


//MUL_NN_N


struct RATIONAL MUL_QQ_Q(struct RATIONAL x, struct RATIONAL y)
{
	struct RATIONAL mul;

	mul.numerator = MUL_NN_N(x.numerator, y.numerator);   
	mul.denomenator = MUL_NN_N(x.denomenator, y.denomenator);
	mul.sign = x.sign^y.sign; 
	return mul;
}