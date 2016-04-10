//Сахаров Илья Владимирович 5307
//Вычитание целых чисел

INTEGER SUB_ZZ_Z(INTEGER firstTerm, INTEGER secondTerm)
{
	INTEGER result;

	result.number = ADD_ZZ_Z(firstTerm, MUL_Z-_Z(secondTerm)).number;
	result.index = ADD_ZZ_Z(firstTerm, MUL_Z-_Z(secondTerm)).index;
	result.sign = firstTerm.sign;

	return result;
}
