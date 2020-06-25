#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int posipl(char *string, char *to_find) //*string é a string e to_find a substring
{
    char c = to_find[0];
    int z = 0;

    int n = strlen(to_find);

    
    while (*string != '\0')
    {
        if (*string == c && memcmp(string, to_find, n) == 0)
        {   
            return z;
        }
        else
        {
            z++;
            string++;
        }
    }
}



int main()
{
    char string[] = {"atirei o pau no ga to to, mas o ga to to."}; //vou receber isso na funcão
    char to_findstring[] = {"o pau no"};                               //tbm vou receber isso na funcão
    int resultado = 0;

    resultado = posipl(string, to_findstring);

    printf("a posicao é %d\n", resultado);







    
    /*
    char comparador[100];

    // algoritmo de marcar as posicões das letras na frase
    char c = to_findstring[0];
    char *string = &string[0];
    int posiletra[strlen(string)]; //vetor q armazena a posicão das letras
    posiletra[0] = 0;
    int bool = 0; //comparador booleano para o do while
    int z = 0;
    int k = 1; //var de posicões no vetor posiletra

    while (*string != '\0')
    {
        if (*string != c)
            z++;
        else if (*string == c)
        {
            posiletra[k] = z;
            k++;
            z++;
        }
        *string++;
    }

    k = 0;

    do
    {
        int i = 0;
        for (int j = posiletra[k]; j <= posiletra[k + 1]; j++, i++) //como é to_findstring e n frase eu vou transferir tudo entre os espacos
        {   
                                                              //aqui eu to transferindo to_findstrings para outro vetor comparador
            comparador[i] = string[j];
            printf("%c\n", comparador[i]);
        }

        if (strcmp(comparador, to_findstring) == 0)
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