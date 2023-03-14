#include <stdio.h>
#include <string.h>
/*Declare the function as void to manipulate the char string, and do not have a segementation fault.
Also applies with the vertical function*/
void horizontal(char* str,int x);
void vertical(char* str,int x);


int main(void)
{
    int size = 6;/* Change the size to whatever you want*/
    char x[50];
    horizontal(x,size);
    char y[50];
    vertical(y, size);
    for (int i = 0; i<3; i++)
    {
        printf("%s\n", x);
        if(i==2)
        {
            break;
        }
        for(int j = 0; j<2; j++)
        {
            printf("%s\n", y);
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
