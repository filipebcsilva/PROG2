#include "Includes/data.h"
#include <stdio.h>
int verificaDataValida(int dia, int mes, int ano)
{
    if (ano >= 0)
    {
        if (mes >= 1 && mes <= 12)
        {
            if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
            {
                if (dia >= 0 && dia <= numeroDiasMes(mes, ano))
                {
                    return 1;
                }
            }
            else if (mes == 2)
            {
                if (dia >= 0 && dia <= numeroDiasMes(mes, ano))
                {
                    return 1;
                }
            }
            else
            {
                return 1;
            }
        }
    }
    return 0;
}
int numeroDiasMes(int mes, int ano)
{
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
    {

        return 31;
    }
    else if (mes == 2)
    {
        if (verificaBissexto(ano))
        {
            return 29;
        }
        else
            return 28;
    }
    else
    {
        return 30;
    }
}
int verificaBissexto(int ano)
{
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
    {
        return 1;
    }
    else
        return 0;
}
int calculaDiasAteMes(int mes)
{
}
int comparaData(int dia1, int mes1, int ano1, int dia2, int mes2, int ano2)
{
    if (ano1 > ano2)
    {
        return 1;
    }
    else if (ano1 == ano2)
    {
        if (mes1 > mes2)
        {
            return 1;
        }
        else if (mes1 == mes2)
        {
            if (dia1 > dia2)
            {
                return 1;
            }
            else if (dia1 == dia2)
            {
                return 0;
            }
            else
                return -1;
        }
        else
            return -1;
    }
    else
        return -1;
}
int calculaDiferencaDias(int dia1, int mes1, int ano1, int dia2, int mes2, int ano2)
{
    int i, soma = 0, flag = 0;
    if (comparaData(dia1, mes1, ano1, dia2, mes2, ano2) == 1)
    {
        for (i = mes2 + 1; i <= 12; i++)
        {
            soma += numeroDiasMes(i, ano2);
        }
        soma += numeroDiasMes(mes2, ano2) - dia2;
        for (i = ano2 + 1; i < ano1; i++)
        {
            flag = 1;
            if (verificaBissexto(i))
            {
                soma += 366;
            }
            else
                soma += 365;
        }
        for (i = 1; i < mes1; i++)
        {
            soma += numeroDiasMes(i, ano1);
        }
        soma += dia1;
        if (flag == 0)
        {
            soma -= 365;
        }
        return soma;
    }
    else if (comparaData(dia1, mes1, ano1, dia2, mes2, ano2) == -1)
    {
        for (i = mes1 + 1; i <= 12; i++)
        {
            soma += numeroDiasMes(i, ano1);
        }
        soma += numeroDiasMes(mes1, ano1) - dia1;
        for (i = ano1 + 1; i < ano2; i++)
        {
            flag = 1;
            if (verificaBissexto(i))
            {
                soma += 366;
            }
            else
                soma += 365;
        }
        for (i = 1; i < mes2; i++)
        {
            soma += numeroDiasMes(i, ano2);
        }
        soma += dia2;
        if (flag == 0)
        {
            soma -= 365;
        }
        return soma;
    }
    else
        return 0;
}
void imprimeMesExtenso(int mes)
{
    if (mes == 1)
        printf("Janeiro");
    if (mes == 2)
        printf("Fevereiro");
    if (mes == 3)
        printf("Marco");
    if (mes == 4)
        printf("Abril");
    if (mes == 5)
        printf("Maio");
    if (mes == 6)
        printf("Junho");
    if (mes == 7)
        printf("Julho");
    if (mes == 8)
        printf("Agosto");
    if (mes == 9)
        printf("Setembro");
    if (mes == 10)
        printf("Outubro");
    if (mes == 11)
        printf("Novembro");
    if (mes == 12)
        printf("Dezembro");
}
void imprimeDataExtenso(int dia, int mes, int ano)
{
    printf(" %02d de ", dia);
    imprimeMesExtenso(mes);
    printf(" de %d", ano);
    printf("\n");
}