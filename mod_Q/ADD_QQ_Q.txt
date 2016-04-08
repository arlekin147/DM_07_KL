//Сложение дробей

//Используемые модули
//LCM_NN_N
//MUL_ZZ_Z
//ADD_ZZ_Z
//DIV_NN_N

struct RATIONAL ADD_QQ_Q(struct RATIONAL x,struct RATIONAL y)
{
	struct RATIONAL add;
	struct NATURAL nok, sub1, sub2;

	nok = LCM_NN_N(x.denomenator, y.denomenator);  //находим общий знаменатель
	sub1 = DIV_NN_N(nok, x.denominator);           //находим доп множитель первой дроби
	sub2 = DIV_NN_N(nok, y.denominator);	       //находим доп множитель второй дроби
	
	add.denominator = nok;
	sub1 = MUL_NN_N(sub1, x.numerator);            //находим числители домноженные на доп множители
	sub2 = MUL_NN_N(sub2, y.numerator);
	
	add.numerator = ADD_NN_N(sub1, sub2);          //сумма новых числителей
 	add.sign = x.sign^y.sign;                      //знак исключающее или
	
	
	return add;
}