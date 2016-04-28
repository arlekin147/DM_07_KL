//Проверка на ноль:
//если число не равно нулю 1
//иначе 0

Джурумбаева 5307

bool NZER_N_B(struct NATURAL original)
{
	bool check = FALSE; // маркер принадлежности числа 0 или 1
	int i = 0;

	while (i < original.index && !check) // пока цифры числа равны нулю
		if (original.number[i++])
			check = TRUE; // цифра числа не равна нулю

	return check;
}