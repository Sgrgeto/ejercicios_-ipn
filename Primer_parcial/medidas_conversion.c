#include <stdio.h>
void yardas(float *ft, float *yds);
void pulgadas(float *x, float *y);
void centimetros(float *x, float *y);
void metro(float *x, float *y);

int main()
{
    float ft, yds, in, cm,m;
    printf("Dame los pies\n");
    scanf("%f", &ft);
    printf("Tus pies son %.2fft\n", ft);
    yardas(&ft,&yds);
    pulgadas(&ft,&in);
    centimetros(&ft,&cm);
    metro(&ft,&m);
    

}

void yardas(float *x, float *y)
{
    const float yds_equi= .3333;
    *y = (*x*yds_equi); 
    printf("Las yardas son %.2fyds\n", *y);
}
void pulgadas(float *x, float *y)
{
    const float pulg_equi= 12;
    *y = (*x*pulg_equi); 
    printf("Las pulgadas son %.2fin\n", *y);
}
void centimetros(float *x, float *y)
{
    const float mts_equi= 30.48;
    *y = (*x*mts_equi); 
    printf("Los cm son %.2f cm\n", *y);
}
void metro(float *x, float *y)
{
    const float m_equi= .3048;
    *y = (*x*m_equi); 
    printf("Los metros son %.2fm\n", *y);
}