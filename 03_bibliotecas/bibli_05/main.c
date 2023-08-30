#include <stdio.h>
#include "Includes/string_utils.h"
int main()
{
    char str[1000];
    int opcao = 0;
    scanf("%[^\n]", str);
    while (1)
    {
        char dest[string_length(str)];
        printf("1 - Tamanho da string\n2 - Copiar string\n3 - Converter string para letras maiusculas\n4 - Converter string para letras minusculas\n5 - Imprimir string ao contrario\n6 - Encerrar o programa\nOpcao escolhida: \n");
        scanf("%d", &opcao);
        if (opcao == 6)
            break;
        if (opcao == 1)
            printf("Tamanho da string: %d\n", string_length(str)+1);
        if (opcao == 2)
        {
            string_copy(str, dest);
            printf("String copiada: %s\n", dest);
        }
        if (opcao == 3)
        {
            string_upper(str);
            printf("String convertida para maiusculas: %s\n", str);
        }
        if (opcao == 4)
        {
            string_lower(str);
            printf("String convertida para minusculas: %s\n", str);
        }
        if (opcao == 5)
        {
            string_reverse(str);
            printf("String invertida: \n");
            printf("%s\n",str);
        }
        printf("\n");
    }
    return 0;
}