#include <stdio.h>
#include <stdlib.h>

void sueldo( float *salario, float *horas);
void impuesto(float *iva, float *salario);

int main ()
{
   float salario, horas, horas_extras, iva;
   printf("Introduce tu tiempo laboral\n");
   scanf("%f", &horas);
   if (horas<0)
   {
      printf("Horas inválidas\n");
      exit(0);      
   }
   if (horas>40)
   {
      horas_extras = (horas-40)*.5;
      horas += horas_extras;

   }
   sueldo(&salario, &horas);
   printf("Tu sueldo bruto es %.2f\n", salario);
   if (salario<8000)
   {
      iva = 0;
   }
   else if (salario >= 8000 && salario <= 10000)
   {
      iva = .05;
   }
   else
   {
      iva = .1;
   }
   impuesto(&iva, &salario);
   printf("Tu sueldo neto es %.2f\n", salario);
}

void sueldo( float *salario, float *horas)
{
      const float precio_x_hora = 250;
      *salario = precio_x_hora*(*horas);
}

void impuesto(float *iva, float *salario)
{
   *iva = *iva*(*salario);
   *salario = *salario - *iva;
}