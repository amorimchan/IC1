#include<stdio.h>
#include<string.h>

int main()
{

    char string[] = {"atirei o pau no ga to to, mas o ga to to."}; //vou receber isso na funcão
    char substring[100]; //tbm vou receber isso na funcão
    char comparador[100];

    // algoritmo de marcar as posicões das letras na frase
    char c = substring[0];
    char *s = &string[0];
    int posiletra[strlen(string)]; //vetor q armazena a posicão das letras
    int i = 0;
    int k = 0; //var de posicões no vetor posiletra


    if (*s != c)
        *s++;
    else if (*s == c)
    {
        posiletra[k] = s;
        k++;
    }
    else if (s == &)
    {
        /* code */
    }
    i++;

    return 0;
}