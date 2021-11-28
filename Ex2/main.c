#include <stdio.h>
#include "my_mat.h"
#include <stdlib.h>

int main()
{

    char c;
    scanf("%c", &c);

    while (c != 'D')
    {

        if (c == 'A')
        {
            Func_A();
            scanf("%c", &c);
        }
        else if (c == 'B')
        {
            if ("%d",Func_B())
            {
                printf("TRUE");
            }
            else
            {
                printf("FALSE");
            }
            scanf("%c", &c);
        }
        else
        {
            printf("%d", Func_C());
            scanf("%c", &c);
        }
    }
}