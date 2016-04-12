//Частное от деления многочлена на многочлен при делении с остатком
//Петров 5307
struct POLYNOMIAL DIV_PP_P(struct POLYNOMIAL dividend, struct POLYNOMIAL divider)
{
    struct POLYNOMIAL quotient; //Частное
    struct POLYNOMIAL work;     //Рабочая переменная
    int i;

    quotient.degree = dividend.degree - divider.degree;
    work = MUL_Pxk_P(divider, quotient.degree);
    for(i = 0; i + quotient.degree < dividend.degree; i++)
    {
        quotient.factors[i] = SUB_QQ_Q(dividend.factors[quotient.degree + i], work.factors[quotient.degree + i]);
    }
    return quotient;
}
