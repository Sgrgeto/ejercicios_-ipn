#include <stdio.h>

float variable_x(float a,float b,float c,float d,float e,float f);
float variable_y(float a,float b,float c,float d,float e,float f);

int main ()
{
    float x1,x2, x3,y1,y2,y3;
    printf("Escribe tus valores del primer conjunto\n");
    scanf("%f", &x1);
    scanf("%f", &x2);
    scanf("%f", &x3);
    printf("Escribe tus valores del segundo conjunto\n");
    scanf("%f", &y1);
    scanf("%f", &y2);
    scanf("%f", &y3);
    printf("Tu ecuacion es %.0fx  %.0fy =%.0f\n", x1,x2,x3);
    printf("Tu ecuacion es %.0fx  %.0fy =%.0f\n", x1,x2,x3);
    float variablex =variable_x(x1,x2, x3,y1,y2,y3);
    float variabley = variable_y(x1,x2, x3,y1,y2,y3);
    printf("Tu variable x es %.1f\nTu variable y es %.1f", variablex,variabley);



}

float variable_x(float a,float b,float c,float d,float e,float f)
{
    float x = (((c*e)-(b*f))/((a*e)-(b*d)));
    return x;
}

float variable_y(float a,float b,float c,float d,float e,float f)
{
    float x = (((a*f)-(c*d))/((a*e)-(b*d)));
    return x;
}

