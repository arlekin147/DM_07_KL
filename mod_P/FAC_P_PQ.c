﻿//Вынесение из многочлена НОК знаменателей коэффициентов и НОД числителей
//сырой и жуткий, работает только до 2й строчки
//Васильева Людмила 5307

/*
подгружаемые модули:

ABS_Z_N
TRANS_Z_N
LCM_NN_N
GCF_NN_N
TRANS_N_Z
DIV_ZZ_Z
MUL_NN_N


надо передавать ещё и указатель дробь 
*/

struct POLYNOMIAL FAC_P_PQ (struct POLYNOMIAL c, struct RATIONAL *m )
{
   struct POLYNOMIAL res;
   res.factors = (RATIONAL*)malloc(c.degree*sizeof(RATIONAL));
   res.degree = c.degree; 
   struct NATURAL num; // нод числителей
   struct NATURAL den; // нок знаменателей
   int i;
   bool stop; //чтобы цикл завершился, если нод = 1
   num.index = 1;
   num.number[0] = 0;
   den.index = 1;
   den.number[0] = 0;

   for(i=0, stop=0; i<c.degree & stop==0; i++)
   {
      num = GCF_NN_N(num, c.factors[i].numerator);
      if (num.number == 1)
      stop = 1;
   }
   for(i=0; i<c.degree; i++)
      den = LCM_NN_N(den, c.factors[i].denominator);

   for(i=0; i<c.degree; i++)
   {
      res.factors[i].numerator = MUL_NN_N(TRANS_Z_N(DIV_ZZ_Z(TRANS_N_Z(c.factors[i].numenator),TRANS_N_Z(num))),TRANS_Z_N(DIV_ZZ_Z(TRANS_N_Z(den),TRANS_N_Z(c.factors[i].denominator)))); // :) it's just a magic
      //итый числитель = (итый числитель / нод всех числителей )*(нок знаменателей / итый знаменатель), это целочисленное деление по определению  

      res.factors[i].denominator.number=(int*)malloc(1*sizeof(int)); 
      res.factors[i].denominator.number[0]=0;
      res.factors[i].denominator.index=1;

      res.factors[i].sign = c.factors[i].sign;
   }

m->numerator = num;
m->denominator = den;
m->sign = 0;

return res;
}
