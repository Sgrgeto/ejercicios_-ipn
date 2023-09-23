#include <stdio.h>
#include <stdlib.h>
int suma(int size, int array[], int *count, int *acumulado);
int main()
{
    int size = 1, i =0, numero, count =0, acumulado=0;
    int *array= malloc(size*sizeof(int));
    if (array == NULL) {
        printf("Memory not allocated.\n");}
    do {
        printf("Dame un numero\n");
        scanf("%i", &numero);
        fflush(stdin);
        if (numero == 0)
        {
            break;
        }
        else
        {
            size++;
            array = realloc(array,sizeof(int)*size);
            array[i]= numero;
            i++;
        }
    }while(1);
    suma(size,array,&count,&acumulado);
    free(array);
    return 0;
}

int suma(int size, int array[], int *count, int *acumulado)
{
    if (*count> size)
    {
        printf("Acumulado: %d", *acumulado);
        return *acumulado;   
    }
    else
    {
        if(array[*count]%2==0)
        {
            *acumulado = *acumulado+array[*count];
        }
        else
        {
            printf("Este es impar %i\n", array[*count]);
        }
        *count= *count+1;
        return suma(size,array, count, acumulado);
    }
}
