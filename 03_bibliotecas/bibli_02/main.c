#include <stdio.h>
#include "Includes/matrix_utils.h"
int main()
{
    int escolha, escalar, opcao;
    int rows1, rows2, cols1, cols2;
    scanf("%d %d", &rows1, &cols1);
    int matrix1[rows1][cols1];
    matrix_read(rows1, cols1, matrix1);
    scanf("%d %d", &rows2, &cols2);
    int matrix2[rows2][cols2];
    matrix_read(rows2, cols2, matrix2);
    int result[100][100];
    while (1)
    {
        printf("1 - Somar matrizes\n2 - Subtrair matrizes\n3 - Multiplicar matrizes\n4 - Multiplicacao de uma matriz por escalar\n5 - Transposta de uma matriz\n6 - Encerrar o programa\nOpcao escolhida:\n");
        scanf("%d", &escolha);
        if (escolha == 6)
        {
            break;
        }
        if (escolha == 1)
        {
            if (possible_matrix_sum(rows1, cols1, rows2, cols2) == 1)
            {
                matrix_add(rows1, cols1, matrix1, rows2, cols2, matrix2, result);
                matrix_print(rows1, cols1, result);
            }else
            printf("Erro: as dimensoes da matriz nao correspondem");
        }
        if (escolha == 2)
        {
            if (possible_matrix_sub(rows1, cols1, rows2, cols2) == 1)
            {
                matrix_sub(rows1, cols1, matrix1, rows2, cols2, matrix2, result);
                matrix_print(rows1, cols1, result);
            }else
            printf("Erro: as dimensoes da matriz nao correspondem");
        }
        if (escolha == 3)
        {
            if (possible_matrix_multiply(cols1, rows2) == 1)
            {
                matrix_multiply(rows1, cols1, matrix1, rows2, cols2, matrix2, result);
                matrix_print(rows1, cols2, result);
            }else
            printf("Erro: o numero de colunas da primeira matriz eh diferente do numero de linhas da segunda matriz");
        }
        if (escolha == 4)
        {
            scanf("%d", &escalar);
            scanf("%d", &opcao);
            if (opcao == 1)
            {
                scalar_multiply(rows1, cols1, matrix1, escalar);
                matrix_print(rows1, cols1, matrix1);
            }
            else
            {
                scalar_multiply(rows2, cols2, matrix2, escalar);
                matrix_print(rows2, cols2, matrix2);
            }
        }
        if (escolha == 5)
        {
            transpose_matrix (rows1,  cols1, matrix1, result);
            matrix_print(cols1, rows1, result);
            printf("\n");
            transpose_matrix (rows2,  cols2, matrix2, result);
            matrix_print(cols2, rows2, result);

        }
        printf("\n");
    }

    return 0;
}