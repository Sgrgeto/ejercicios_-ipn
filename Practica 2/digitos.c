#include <string.h>
#include <stdio.h>

int digitos (int digito);

int main ()
{
    int digito, num_digitos;
    printf("Dame un numero de 3 digitos: \n");
    scanf("%i", &digito);
    num_digitos=digitos(digito);
    if (num_digitos>3)
    {
        printf("Numero inválido\n");
    }
    else
    {
        printf("Tu numero tiene %i digitos\n", num_digitos);
        if (digito<0)
            printf("Tu numero es negativo\n");
        else
        {
            printf("Tu numero es positivo\n ");
        }
    }
}

int digitos(int digito)
{
    int cont = 0;
    if (digito < 0)
    {
        digito = digito *-1;
    }
    if (digito >= 0 && digito <10)
    {
        return 1;
    }
    else
    {
        cont = 1 + digitos(digito/100);
    }
    return cont;
}