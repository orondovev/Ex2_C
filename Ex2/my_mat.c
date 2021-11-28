#include <stdio.h>
#include <stdlib.h>
#include "my_mat.h"

int matrix[10][10];

void Func_A()
{

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int k = 1; k < 11; k++)
    {
        for (int i = 0; i < 10; i++)
        {
            for (int j = i; j < 10; j++)
            {
                int min_val = __min(matrix[i][j], matrix[i][k] + matrix[k][j]);
                matrix[i][j] = min_val;
                matrix[j][i] = min_val;
            }
        }
    }
}

int Func_B()
{
    int i, j;
    scanf("%d, %d", &i, &j);
    return matrix[i][j];
}

int Func_C()
{
    int i, j;
    scanf("%d, %d", &i, &j);
    return matrix[i][j];
}