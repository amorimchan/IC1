#include<stdio.h>
#include<string.h>

//Escreva um programa que contenha uma funcão que retorne a primeira posicão de uma substring dentro de uma string. 
//Caso a substring não seja encontrada, a funcão deve retornar zero.

int main(){

    char string[] = {"atirei o pau no ga to to, mas o ga to to."};
    char substring[100];
    char comparador[100];
    int espnum[30]; espnum[0] = 0;
    int k = 0;


    for (int i = 0; i < strlen(string); i++) //PEGA OS NUMEROS DOS ESPACOS DENTRO NA STRING
    {
        /*
        if (string[i] == ';' || string[i] == ',' || string[i] == '.' || string[i] == ':' || string[i] == '"' || string[i] == '/' || string[i] == '-' || string[i] == '_' || string[i] == '!' || string[i] == '?' || string[i] == '(' || string[i] == ')')
        {
            continue;  
        }
        */
        
        if (string[i] == ' ')
        {
            espnum[k+1] = i;
            k++;
            printf("%d\n", espnum[k-1]);
        }
    }

    k = 0;

    do
    {
        for (int j = espnum[k]; j < espnum[k+1]; j++, k++) //como é substring e n frase eu vou transferir tudo entre os espacos 
    {                                                  //aqui eu to transferindo substrings para outro vetor comparador
        comparador[k] = string[j];
    }

    if (strcmp(comparador, substring) == 0)
    {
        
    }
    } while (/* condition */);
    






    for (int j = posiesp1; j < posiesp2; j++, k++) //como é substring e n frase eu vou transferir tudo entre os espacos 
    {                                              //aqui eu to transferindo substrings para outro vetor comparador
        comparador[k] = string[j];
    }

    if (strcmp(comparador, substring) == 0)
    {
        
    }
    
    





    if (strcmp(comparador, str1) == 0) //compara essa palavra com a eleita a ser removida, e se for congruente será substituida
    {
        for (int j = i; j < strlen(frase); j++)
        {
            interm[j-i] = frase[j];
        }
        strcat(str2, interm);
    }
    

    return 0;
}