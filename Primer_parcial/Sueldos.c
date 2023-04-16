#include <stdio.h>
#include <string.h>

int clave();
void sueldos(float *s);



int main(void)
{
   float sueldos[6];
   float salario_total;

   for (int i=0; i <sizeof(sueldos)/sizeof(float); i++)
      ///  Add and sum the elements of the array
   {
        sueldo(&sueldos[i]);
        salario_total += sueldos[i];
    }
    
    float salario_prom = salario_total/6;
    printf("Tu sueldo semestral es %.2f\nTu sueldo promedio es %.2f", salario_total, salario_prom);

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
{///Checks the salary
    do
    { 
        printf("Salario debe ser mayor a 200\n");
        printf("Dame tu salario \n");
        scanf("%f", &*s);
    } while (*s< 200);
}


