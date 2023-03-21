#include <stdio.h>
#include <string.h>

int clave();
void sueldos(float *s);
float salarios(float x,float y,float z,float a,float b,float c);


int main(void)
{
   float s1,s2,s3,s4,s5,s6;
   clave();
   sueldos(&s1);
   printf("Tu primer sueldo es %.2f\n", s1);
   sueldos(&s2);
   printf("Tu segundo sueldo es %.2f\n", s2);
   sueldos(&s3);
   printf("Tu tercer sueldo es %.2f\n", s3);
   sueldos(&s4);
   printf("Tu cuarto sueldo es %.2f\n", s4);
   sueldos(&s5);
   printf("Tu quinto sueldo es %.2f\n", s5);
   sueldos(&s6);
   printf("Tu sexto sueldo es %.2f\n", s6);
   salarios(s1,s2,s3,s4,s5,s6);

}


int clave()
{
    int x;
    printf("Dame tu clave :\n");
    scanf("%d", &x);
    printf("Tu clave es: %d \n", x);
    return x;
}

void sueldos(float *s)
{
    do
    { 
        printf("Salario debe ser mayor a 200\n");
        printf("Dame tu salario \n");
        scanf("%f", &*s);
    } while (*s< 200);
}

float salarios(float x,float y,float z,float a,float b,float c)
{
    float salario_semestral = x+y+z+a+b+c;
    float promedio = salario_semestral/6;
    printf("Tu salario semestral completo es %.2f\n", salario_semestral);
    printf("Tu promedio mensual es %.2f", promedio);

}
