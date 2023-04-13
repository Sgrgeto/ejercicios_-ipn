#include <stdlib.h>
#include <string.h>
#include <stdio.h>


void unidades(int *digito,int dividendo, int *units);
void numeroRomano(int *units, char *romano, char *letraA, char *letraB, char *letraC);

struct Valores
{
    int unidad;
    char letraMayor[3];
    char letraMedia[3]; 
    char letraMenor[3];
}
centenas ={0, "M","D", "C"},
decenas = {0, "C", "L", "X"},
unit ={0, "X","V", "I"};

int main()
{
    char romano[10];
    int digito=33, dividendo, units, restante;
    unidades(&digito, dividendo=100, &units);
    centenas.unidad = units;
    numeroRomano(&centenas.unidad, romano, centenas.letraMayor, centenas.letraMedia, centenas.letraMenor);
    unidades(&digito,dividendo=10, &units);
    decenas.unidad = units;
    numeroRomano(&decenas.unidad, romano, decenas.letraMayor, decenas.letraMedia, decenas.letraMenor);
    unidades(&digito, dividendo=1, &units);
    unit.unidad =units;
    numeroRomano(&unit.unidad, romano, unit.letraMayor, unit.letraMedia, unit.letraMenor);
    printf("%s", &romano);
    
}


void unidades(int *digito,int dividendo, int *units)
{
    *units = *digito/dividendo;
    *digito = *digito%dividendo;
}
void numeroRomano(int *units, char *romano, char *letraMayor, char *letraMedia, char *letraMenor)
{

    if (*units == 0)
    {
        strcat(romano,"");
    }
    else if ((*units)>0 && (*units )<=3)
    {
        for (int i = 0; i<(*units);i++)
        {
            strcat(romano, letraMenor);
        }
    }
    else if((*units)>3 && (*units)<=5)
    {
        if (5-(*units)==0)
        {
            strcat(romano,letraMedia);
        }
        else
        {
            strcat(romano, letraMenor);
            strcat(romano, letraMedia);
        }
    }
    else if((*units)>5 && (*units)<=8)
    {
        for(int i = 0; i <(*units)-5;i++)
        {
            strcat(letraMedia,letraMenor);
        }
        strcat(romano,letraMedia);
    }
    else
    {
        strcat(letraMenor, letraMayor);
        strcat(romano,letraMenor);
    }
    
    
}