#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void informacion(float *dias, int *edad);
void costo(float *precio, float* dias, float *costo_adicional);

int main()
{
    char enfermedad, respuesta;
    int edad;
    float precio, dias, costo_adicional;
    printf("Introduce la letra correspondiente a tu enfermedad\nC = Cancer\nH = Hipertension\nD = Diabetes\n");
    scanf("%c", &enfermedad);
    if (enfermedad == 'C'| enfermedad=='c')
    {
        precio = 2200;
        informacion(&dias, &edad);
        if (edad >=12 && edad<=25)
        {
            costo_adicional =.10;
        }
        else
        {
            costo_adicional = 0;
        }
    }
    else if (enfermedad== 'H'| enfermedad=='h')
    {
        precio = 1100;
        informacion(&dias, &edad);
        if (edad >=12 && edad<=25)
        {
            costo_adicional =.10;
        }
        else
        {
            costo_adicional = 0;
        }
    }
    else if (enfermedad== 'D'| enfermedad=='d')
    {
        precio= 1500;
        informacion(&dias, &edad);
        if (edad >=12 && edad<=25)
        {
            costo_adicional =.10;
        }
        else
        {
            costo_adicional = 0;
        }
    }
    else
    {
        printf("Enfermedad no encontrada");
        exit(0);
    }
    costo(&precio, &dias, &costo_adicional);
    printf("Tu costo es %.2f\n", precio);
}


void informacion(float *dias, int *edad)
{
    printf("Introduce tu edad\n");
    printf("Introduce los dias hospitalizados\n");
    scanf("%i%f", *&edad, *&dias);
}

void costo(float *precio, float* dias, float *costo_adicional)
{
    *costo_adicional = ((*precio)*(*costo_adicional))*(*dias);
    *precio = ((*precio)*(*dias))+ *costo_adicional;
}