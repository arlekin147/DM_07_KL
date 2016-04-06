//Сахаров Илья Владимирович 5307
//Умножение целого на (-1)

INTEGER MUL_Z_Z(INTEGER taken)
{
	INTEGER ret;
	ret.sign = ~taken.sign;

	return ret;
}