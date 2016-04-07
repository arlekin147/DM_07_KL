//Умножение целых чисел

INTEGER MUL_ZZ_Z(INTEGER a, INTEGER b)
{
    INTEGER ans;                            // Результат умножения
    NATURAL PR;
    NATURAL a_in_N;                         // Абсолютное значение a
    NATURAL b_in_N;                         // Абсолютное значение b
	
	a_in_N = ABS_Z_N(a);
    b_in_N = ABS_Z_N(b);

    PR = MUL_NN_N(a_in_N, b_in_N);

    delete [] a_in_N.number;
    delete [] b_in_N.number;

    ans.number = new int[PR.index];
    ans.number = PR.number;
    ans.index = PR.index;
    ans.sign = (a.sign != b.sign);
	
    return ans;
}
