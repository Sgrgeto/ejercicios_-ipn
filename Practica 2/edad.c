#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int dia_nac,mes_nac,year_nac, edad;
    time_t tsac= time(NULL);
    struct tm* pt1 = localtime(&tsac);
    int dia_actual= pt1->tm_mday, mes_actual=pt1->tm_mon+1, year_actual =pt1->tm_year+1900;
    printf("Escribe tu día de nacimiento\n");
    printf("Escribe tu mes de nacimiento\n");
    printf("Escribe tu año de nacimiento\n");
    scanf("%i%i%i", &dia_nac,&mes_nac,&year_nac);
    printf("Dia atual: %i\nMes actual: %i\nAño actual: %i\n", dia_actual, mes_actual, year_actual);
    if ((dia_nac<1 | dia_nac >31)|(mes_nac<1 | mes_nac >12)|(year_nac<1900 | year_nac > year_actual))
    {
        printf("Fecha invalida");
        exit(0);
    }
    edad = year_actual-year_nac;
    if ((mes_nac> mes_actual|mes_nac == mes_actual) && dia_nac>dia_actual && year_actual-1 != year_nac)
    {
        edad -=1;
    }
    else if ((year_actual == year_nac)|(year_actual-1 == year_nac && mes_nac>mes_actual))
    {
        int meses, dias;
        if (mes_nac>mes_actual)
        {
            meses = 12-mes_nac;
            meses +=mes_actual;
        }
        else
        {
            meses = mes_actual-mes_nac;
        }
        if (dia_nac>dia_actual)
        {
            dias = dia_nac - dia_actual;
        }
        else
        {
            dias = dia_actual-dia_nac;
        }
        printf("Tu edad es %i meses y %i dias\n", meses, dias);
        exit(0);       
    }    
    printf("Tu edad es %i\n", edad);
}