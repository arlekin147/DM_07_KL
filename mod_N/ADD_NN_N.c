//Сложение натуральных чисел
 // Ишметов 5307
 struct NATURAL ADD_NN_N(struct NATURAL x, struct NATURAL y)
 	{
 		NATURAL answ; 
 		if (COM_NN_D(x, y) == 2)
 			{
 				answ.index = x.index;
 				for (short i = x.index-1; i >= y.index; i--)
 					y.number[i] = 0;
 			}
 		else
 			{
 				answ.index = y.index;
 				for (short i = y.index - 1; i >= x.index; i--)
 					x.number[i] = 0;
 			}
 		answ.number = new int[answ.index];
 		answ.number[0] = 0;
 		for (short i = 0; i < answ.index; i++)
 			{
 				answ.number[i] =answ.number[i] + x.number[i] + y.number[i];
 				if (answ.number[i] > 9)
 					{
 						answ.number[i] = answ.number[i] - 10;
 						answ.number[i + 1] = 1;
 					}
 				else
 					answ.number[i + 1] = 0;
 			}
		if (answ.number[answ.index] > 0)
			answ.index++;
 		return answ;
 	}