#include "Includes/string_utils.h"
#include <stdio.h>
int string_length(char *str)
{
    int i, cont = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        cont++;
    }
    return cont;
}
void string_copy(char *src, char *dest)
{
    int i;
    for (i = 0; src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
    dest[i] = '\0';
}
void string_upper(char *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] + ('A' - 'a');
        }
    }
}
void string_lower(char *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + ('a' - 'A');
        }
    }
}
void string_reverse(char *str)
{
    int tam = string_length(str), i;
    char aux = '0';
    for (i = 0; i < tam / 2; i++)
    {
        aux = str[i];
        str[i] = str[tam - i - 1];
        str[tam - i - 1] = aux;
    }
}