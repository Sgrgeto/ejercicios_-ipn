#include <stdio.h>
#include <string.h>
void horizontal(char* x, int size);
void vertical(char* y, int size);
void word_(char* string_z,char *word, int size);

int main(void)
{
    int size = 45;
    char x[50];
    char y[50];
    horizontal(x,size);
    char z[50];
    char i[50];
    char word[] ="PRACTICA1";
    char word2[] ="RODRIGO";
    word_(z,word,size);
    word_(i,word2,size);
    vertical(y,size);
    for (int w=0; w<1;w++)
    {
        printf("%s\n",&x);
        printf("%s\n",&z);
        printf("%s\n",&i);
        printf("%s\n",&y);
        printf("%s\n",&x);
    } 
    
}
void horizontal(char* string, int size)
/*Pass arguments string(explained on the first comentary), and size to se how long
the user wants the string.*/
{
    char string_x[] = "x";
    for (int i =0; i<1; i++)
    {
        for (int j=0; j<size; j++)
        /*Use the strcat funciton to concatenate for every cicle an x to the string variable*/
        {
            strcat(string, string_x);
        }
    }
}

void vertical(char* string_y, int size)
/*We declare a space variable to have the right spaces between the first x and the second x*/
{
    char espace[]= " ";
    char stringx[] = "x";
    for (int i = 0; i<1; i++)
    /*The first cicle add a x to the string_y variable*/
    {
        strcat(string_y,stringx);
        for (int j = 0; j< size-2; j++)
        /*Substract the size of the string minus 2(are the x at the start and at the end)*/
        {
            strcat(string_y,espace);
            /*When the substracion of the size and the variable j are greater than 2 or equal to 3
            add the last x to the string*/
            if (size - j == 3)
            {
                strcat(string_y,stringx);
            }
        }
    }
}

void word_(char *string_z, char *word, int size)
/*Return a string with a name in the middle*\
{
    char espace[] = " ";
    char stringx[] ="x";
    int size2= strlen(word)/2;
    int total = strlen(word)+((size/2)-size2);
    for (int i = 0; i<1; i++)
    {
        strcat(string_z,stringx);
        for (int j =1; j< (size/2)-size2; j++)
        {
            strcat(string_z,espace);
        }
        strcat(string_z,word);
        for (int y=total; y< size-1;y++)
        {
            strcat(string_z,espace);
        }
    }
    strcat(string_z,stringx);

}
