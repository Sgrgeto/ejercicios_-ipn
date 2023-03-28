#include <stdio.h>
int collatz(int n);

int main()
{
    int n=5;
    collatz(n);
}

int collatz(int n)
{
    if (n==1)
    {
        printf("1");
        return 1;
    }
    if (n%2 >0)
    {
        printf("%i\n", n);
        return collatz((n*3)+1);
    }
    else 
    {
        printf("%i\n",n);
        return collatz(n/2);
    }
}