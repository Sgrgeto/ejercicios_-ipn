/*Integrantes
EBARRERA FLORES ERICK ALFREDO
CHAGOYA GOMEZ DIEGO FRANCISCO
RODRIGO VALDES ORTEGA*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#define CANTIDAD_PALABRAS 25

int word_size(int i, int random, char palabras[][CANTIDAD_PALABRAS]);
void find_letter(int array[],int _word_size, int random, char palabras[][CANTIDAD_PALABRAS], int *count, int *count_2, char letra);
char ask_letter(char letra);
void printing_letters(char palabras[][CANTIDAD_PALABRAS], int random,int _word_size, int array[]);


int main()
{
    srand(time(NULL));
    char palabras[][CANTIDAD_PALABRAS] = {"arsenal", "palabra", "bacardi", "camaleon", "futbol", "maestro", "computacion", "programacion", "estudios", "mandarina", "naranja", "melon", "sandia", "paramedico", "escuela", "portafolio", "estuchera"};
    char letra[1] = "a";
    int size = sizeof(palabras)/CANTIDAD_PALABRAS, i = 0, _palabra_random = rand()%size;
    int _word_size = word_size(i,_palabra_random, palabras);
    int count = 0, error = 0, array[_word_size];
    printf("Solo escribe con minúscula\nTienes 3 intentos\nSi encuentras la letra, apareceran todas\nSi la letra no esta, aparecera un espacio en blanco\nLa palabra tiene %i letras\n", _word_size);
    do
    {
    char letra_i = ask_letter(letra);
    int count_2 = 0;
    find_letter(array, _word_size, _palabra_random, palabras, &count, &count_2, letra_i);
    if(count_2 == 0)
    {
        printf("Letra no encontrada\n");
        error +=1;
    }
    printing_letters(palabras,_palabra_random,_word_size, array);
    printf("\n");
    printf("Llevas %i errores\n", error);
    if (error == 3)
    {
        printf("Perdiste! No sirves para nada\n");
    }
    if (count == _word_size)
    {
        printf("Ganaste! Esperemos logres graduarte\n");
    }
    }while(count < _word_size & error < 3);
}

void printing_letters(char palabras[][CANTIDAD_PALABRAS], int random,int _word_size, int array[])
{
    for(int x= 0; x< _word_size; x++)
    {
        if (array[x] == 1)
        {
            printf("%c", palabras[random][x]);
        }
        else
        {
            printf("_");
        }
    }
}

void find_letter(int array[],int _word_size, int random, char palabras[][CANTIDAD_PALABRAS], int *count, int *count_2, char letra)
{
    for(int j = 0; j< _word_size; j++)
    {
        if(letra == palabras[random][j])
        {
            if(array[j] != 1)
            {
                array[j] = 1;
                *count +=1;
                *count_2 += 1;
            }
            else
            {
                continue;
            }
        }
        else
        {
            if (array[j] == 1)
            {
                continue;
            }
            else
            {
            array[j] = 0;
            }
        }
    }
}
int word_size(int i, int random, char palabras[][CANTIDAD_PALABRAS])
{
    for(i; palabras[random][i] != '\0'; i++)
    {
    }
    return i;
}

char ask_letter(char letra)
{
    printf("Dame una letra\n");
    fflush(stdin);
    scanf("%c", &letra);
    return tolower(letra);
}