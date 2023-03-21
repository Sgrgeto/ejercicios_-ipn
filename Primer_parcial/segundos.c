#include <stdio.h>

void calcular (int *x, int *y, int *z);
void calcular_minutos(int *min, int *seg);

void main()
{
    int seg, h, min;
    printf("Dame los segundos\n");
    scanf("%d", &seg);
    calcular(&seg,&h, &min);
    printf("Tu horas; %d\n", h);
    calcular_minutos(&min, &seg);
    printf("Tu minutos; %d\n", min);
    printf("Tu segundos; %d\n", seg);
    


}

void calcular (int *x, int *hora, int *min)
{
    *hora = *x/3600;
    *min = *x%3600;
}

void calcular_minutos(int *min, int*seg)
{
    *min = *min/60;
    *seg = *min%60;
}