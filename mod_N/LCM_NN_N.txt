//НОК натуральных чисел
/*
Подгружаемые модули:
GCF_NN_N
MUL_NN_N
DIV_NN_N

Изотов Андрей 5307
*/

struct NATURAL LCM_NN_N(struct NATURAL x, struct NATURAL y)
{
	struct NATURAL nod; 
	struct NATURAL nok;
	struct NATURAL op;

	nod = GCF_NN_N(x, y); //вычисляем нод
	op = MUL_NN_N(x, y); //вычисляем произведение чисел
	nok = DIV_NN_N(op, nod); //вычисляем нок
	return nok;
}
