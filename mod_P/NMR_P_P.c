﻿﻿//Преобразование многочлена — кратные корни в простые

//Васильева Людмила 5307 

struct POLYNOMIAL NMR_P_P(struct POLYNOMIAL a) 
{
	return DIV_PP_P(a, GCF_PP_P(a, DER_P_P(a)));
}