#include <stdio.h>

void piramide();

int main()
{
    piramide();
}

void piramide()
{
    int numero=0;
    do
    {
        printf("Dame un numero mayor a 0\n");
        scanf("%i", &numero);
    } while (numero<=0);
    for(numero; numero >0; numero--)
    {
        for(int x =0; x<numero;x++)
        {
        printf("%i ", (x+1));
        }
        
        printf("\n");
    }
}