﻿﻿//Сравнение натуральных чисел: 
//2 - если первое больше либо равно второму 
//0 если равно
 //2 - если первое больше либо равно второму
 //0 если равно 
  //1 иначе
 
 //Ишметов 5307
 short COM_NN_D(struct NATURAL x, struct NATURAL y)
 	{
 		short answ=0;
 		if (x.index != y.index)
 			if (x.index > y.index)
 				answ = 2;
 			else
 				answ = 1;
 		else
 			for (short i = x.index-1; (i >= 0) && (answ == 0); i--)
 				if ((x.number[i]) > (y.number[i]))
 					answ = 2;
 				else
 					if ((x.number[i]) < (y.number[i]))
 						answ = 1;
 		return answ;
 			
 	}