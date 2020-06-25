#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int posipl(char *s, char *sub) //*s é a string e sub a substring
{
    char c = sub[0];
    int j, i, bool, z, k = 1, b = 2; bool = z = 0;
    int *posiletra; posiletra = (int *) malloc(strlen(s)+1); posiletra[0] = 0; //alocando memoria pro vetor posiletra q armazena a posicão dos caracteres
    char *comparador; comparador = (char *) malloc(strlen(sub));

    // algoritmo de marcar as posicões das letras na frase
    while (*s != '\0')
    {
        if (*s != c)
            z++;
        else if (*s == c)
        {
            posiletra[k] = z;
            k++;
            z++;
        }
        s++;
    }

    k = 0;
    
    do
    {
        for (j = posiletra[k]; j <= strlen(sub); j++, i++, b++) //como é substring e n frase eu vou transferir tudo entre os espacos
        {                                                      //aqui eu to transferindo substrings para outro vetor comparador  
            comparador[i] = s[j];
        }
        if (strcmp(comparador, sub) == 0)
        {
            return posiletra[k];
            bool = 1;
        }
        else
        {
            k++;
        }
    } while (bool != 1);

    free(posiletra); free(comparador);
}

int main()
{
    char string[] = {"atirei o pau no ga to to, mas o ga to to."}; //vou receber isso na funcão
    char substring[] = {"o pau no"};                               //tbm vou receber isso na funcão
    int resultado;

    resultado = posipl(string, substring);







    
    /*
    char comparador[100];

    // algoritmo de marcar as posicões das letras na frase
    char c = substring[0];
    char *s = &string[0];
    int posiletra[strlen(string)]; //vetor q armazena a posicão das letras
    posiletra[0] = 0;
    int bool = 0; //comparador booleano para o do while
    int z = 0;
    int k = 1; //var de posicões no vetor posiletra

    while (*s != '\0')
    {
        if (*s != c)
            z++;
        else if (*s == c)
        {
            posiletra[k] = z;
            k++;
            z++;
        }
        *s++;
    }

    k = 0;

    do
    {
        int i = 0;
        for (int j = posiletra[k]; j <= posiletra[k + 1]; j++, i++) //como é substring e n frase eu vou transferir tudo entre os espacos
        {   
                                                              //aqui eu to transferindo substrings para outro vetor comparador
            comparador[i] = string[j];
            printf("%c\n", comparador[i]);
        }

        if (strcmp(comparador, substring) == 0)
        {
            //return posiletra[k];
            printf("%d\n", posiletra[k]);
            bool = 1;
        }
        else
        {
            k++;
        }
        
    } while (bool != 1);
    */

    return 0;
}