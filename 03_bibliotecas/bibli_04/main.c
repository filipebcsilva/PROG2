#include <stdio.h>
#include "Includes/data.h"
int main()
{
    int dia1, mes1, ano1;
    scanf("%d/%d/%d", &dia1, &mes1, &ano1);
    if (verificaDataValida(dia1, mes1, ano1))
    {
        printf("Data informada:");
        imprimeDataExtenso(dia1, mes1, ano1);
        if (verificaBissexto(ano1))
            printf("O ano informado eh bissexto\n");
        else
            printf("O ano informado nao eh bissexto\n");
        printf("O mes informado possui %02d dias\n",numeroDiasMes(mes1,ano1));
        if (dia1 + 1 > numeroDiasMes(mes1,ano1))
        {
            dia1 = 1;
            mes1++;
            if (mes1 > 12)
            {
                mes1 = 1;
                ano1++;
            }
            printf("A data seguinte eh: %02d/%02d/%04d",dia1,mes1,ano1);
        }else
        printf("A data seguinte eh: %02d/%02d/%04d",dia1+1,mes1,ano1);
    }
    else
        printf("A data informada eh invalida\n");
}