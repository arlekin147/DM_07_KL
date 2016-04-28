//Сахаров Илья Владимирович 5307
//Сложение целых чисел

INTEGER ADD_ZZ_Z(INTEGER firstTerm, INTEGER secondTerm)
{
	INTEGER result;
	if(POZ_Z_D(firstTerm) == POZ_Z_D(secondTerm))
	{
		result.number = ADD_NN_N(ABS_Z_N(firstTerm), ABS_Z_N(secondTerm)).number;
		result.index = ADD_NN_N(ABS_Z_N(firstTerm), ABS_Z_N(secondTerm)).index;
		result.sign = firstTerm.sign;
	}
	else
	{
		switch(COM_NN_D(ABS_Z_N(firstTerm), ABS_Z_N(secondTerm))
		{
			case 2:
				result.number = SUB_NN_N(ABS_Z_N(firstTerm), ABS_Z_N(secondTerm)).number;
				result.index = SUB_NN_N(ABS_Z_N(firstTerm), ABS_Z_N(secondTerm)).index;
				result.sign = firstTerm.sign;
				break;
			case 1:
				result.number = SUB_NN_N(ABS_Z_N(secondTerm), ABS_Z_N(firstTerm)).number;
				result.index = SUB_NN_N(ABS_Z_N(secondTerm), ABS_Z_N(firstTerm)).index;
				result.sign = secondTerm.sign;
				break;
			case 0:
				result.number = 0;
				result.index = 1;
				result.sign = firstTerm.sign;
				break;
		}
	}

	return result;
}
