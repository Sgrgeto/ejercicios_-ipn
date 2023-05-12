#include <stdio.h>
#include <stdlib.h>

int main()
{
    int suma=0, numero_1=0, numero_2=0;
    printf("Dame el numero a sumar: \nCuantas veces lo quieres sumar: \n");
    scanf("%i%i",&numero_1,&numero_2);
    for (int i=0;i<numero_2; i++)
    {
        suma +=numero_1;
    }
    printf("La suma total es: %i\n", suma);
}