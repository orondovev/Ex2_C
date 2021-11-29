#include <stdio.h>
#include "my_mat.h"
#include <stdlib.h>

int main()
{

    char c;
    scanf(" %c", &c);

    while (c != 'D')
    {

        if (c == 'A')
        {
            Func_A();
        }
        else if (c == 'B')
        {
            char a = Func_B();
            if (a != 0)
            {
                printf("TRUE");
            }
            else
            {
                printf("FALSE");
            }
            printf("\n");
        }
        else
        {
            int a = Func_C();
            if (a)
            {
                printf("%d", a);
            }
            else{
                printf("%d", -1);
            }
            printf("\n");
        }

        scanf(" %c", &c);
    }
}