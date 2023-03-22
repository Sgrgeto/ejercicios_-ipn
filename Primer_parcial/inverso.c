#include <stdio.h>

float inverso(float,float,float,float,float);

int main(void)
{
    float num1,num2,num3,num4,num5;
    printf("Dame el primer numero\n");
    scanf("%f", &num1);
    printf("Dame el segundo numero\n");
    scanf("%f", &num2);
    printf("Dame el tercer numero\n");
    scanf("%f", &num3);
    printf("Dame el cuarto numero\n");
    scanf("%f", &num4);
    printf("Dame el quinto numero\n");
    scanf("%f", &num5);
    inverso(num1,num2,num3,num4,num5);

}

float inverso(float num1,float num2,float num3,float num4,float num5)
{
    printf("Orden inverso: %.2f, %.2f, %.2f, %.2f, %.2f. ", num5,num4,num3,num2,num1);
}