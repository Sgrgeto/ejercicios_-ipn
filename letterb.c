#include <stdio.h>

int main(void)
{
    for (int i= 0; i< 3; i++)
    {
        printf("xxxx\n");
        if (i==2)
            {
                break;
            }
        for (int j=0; j<2;j++)
        {
            printf("x  x\n");
        }
    }
}
