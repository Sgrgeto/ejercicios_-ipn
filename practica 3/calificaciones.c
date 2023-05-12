#include <stdio.h>

void verificarcalificacion(float *numero);
void average(float *calif_1, float *calif_2, float *calif_3,float *promedio);
struct Alumno
{
    float calificacion_1;
    float calificacion_2; 
    float calificacion_3;
    float promedio;
};

struct Alumno infoalumno(struct Alumno alumno)
{
    alumno.calificacion_1=-1, alumno.calificacion_2=-1, alumno.calificacion_3=-1, alumno.promedio=0;
    verificarcalificacion(&alumno.calificacion_1);
    verificarcalificacion(&alumno.calificacion_2);
    verificarcalificacion(&alumno.calificacion_3);
    average(&alumno.calificacion_1,&alumno.calificacion_2,&alumno.calificacion_3,&alumno.promedio);
    return alumno;
};

int main()
{
    int reprobados=0, aprobados=0;
    float promedio_grupal=0;
    struct Alumno alumno[5];
    for(int i=0;i<5;i++)
    {
    printf("Informacion alumno %i\n", i+1);
    alumno[i] = infoalumno(alumno[i]);
    if (alumno[i].promedio<6)
    {
        reprobados+=1;
    }
    else
    {
        aprobados+=1;
    }
    promedio_grupal+=alumno[i].promedio;
    }
    promedio_grupal = promedio_grupal/5;
    printf("Numero de aprobados: %i\nNumero de reprobados: %i\nPromedio grupal: %.2f",aprobados,reprobados,promedio_grupal);
}

void verificarcalificacion(float *numero)
{
    do
    {
        printf("Dame tu calificacion entre 0 y 10\n");
        scanf("%f", &*numero);
        if (*numero>10 || *numero<0)
        {
            printf("Numero incorrecto\n");
        }
    } while (*numero<0 || *numero>10);
    
}
void average(float *calif_1, float *calif_2, float *calif_3, float *promedio)
{
    *promedio = (*calif_1+*calif_2+*calif_3)/3;
}