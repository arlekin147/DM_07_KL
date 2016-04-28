struct POLYNOMIAL MOD_PP_P(struct POLYNOMIAL dividend, struct POLYNOMIAL divider)
{
    struct POLYNOMIAL residual; //Остаток от деления
    struct POLYNOMIAL service;  //Служебная переменная
    int i; //Переменная управления циклами
    struct RATIONAL subtraction; //Вычисление вычитания

    residual.factors = NULL;
    service = DIV_PP_P(dividend, divider); //Вычисление частного деления
    service = MUL_PP_P(service, divider);  //Вычисление произведения частного и делителя
  
    for(i = divider.degree + 1; i >= 0;i--)
    {
         subtraction = SUB_QQ_Q();
         if(subtraction.numerator.index != 0)
         {
             if(residual.factors == NULL)
             {
                 residual.factors = (struct RATIONAL*)malloc(sizeof(struct RATIONAL) * i);
                 residual.degree = i + 1;
             }
             residual.factors[i] = subtraction;
        }
    }
    
    return residual;
}
         