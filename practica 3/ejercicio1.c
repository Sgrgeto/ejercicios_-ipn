#include <stdio.h>
#include <stdlib.h>

void numeros(int *numero, int *numeros_impares, int *numeros_pares);


int main()
{
    int count=0,numero=0,numeros_pares= 0,numeros_impares=0, promedio=0;
    float average=0;
    do
    {
    printf("Dame un numero\n");
    scanf("%i", &numero);
    if (numero<0)
    {
    printf("Numero negativo\n");
    break;
    }
    numeros(&numero, &numeros_impares,&numeros_pares);
    count+=1;
    promedio+=numero;

    } while (numero>=0);
    average = (float)promedio/count;
    printf("Conteo numeros = %i\nNumeros pares = %i\nNumeros impares =%i\nPromedio =%.2f\n", count,numeros_pares,numeros_impares, average);
}

void numeros(int *numero, int *numeros_impares, int *numeros_pares)
{
if(*numero%2==0)
{
    *numeros_pares+=1;
}
else
{
    *numeros_impares+=1;
}
}
