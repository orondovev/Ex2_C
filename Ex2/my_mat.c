#include <stdio.h>
#include <stdlib.h>
#include "my_mat.h"

int min(int x, int y)
{
    return (x < y) ? x : y;
}

static int matrix[10][10];
void Func_A()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            scanf(" %d", &matrix[i][j]);
        }
    }
    for (int k = 0; k < 10; k++)
    {
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (matrix[i][k] == 0 || matrix[k][j] == 0)
                {
                    continue;
                }
                if ((matrix[i][j] == 0 && i != j) || (matrix[i][k] + matrix[k][j] < matrix[i][j]))
                {
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
                }
            }
        }
    }
}

int Func_B()
{
    int i, j;
    scanf(" %d", &i);
    scanf(" %d", &j);
    int ans = matrix[i][j];
    return ans;
}

int Func_C()
{
    int i, j;
    scanf(" %d", &i);
    scanf(" %d", &j);
    return matrix[i][j];
}