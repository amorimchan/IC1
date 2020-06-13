#include<stdio.h>
#include<string.h>

// o q eu pensei: procurar a palavra a ser substituida comparando os dois vetores

int main(){

    int count;
    char comparador[100];
    int teste_bol;
    char interm[100];
    char str1[100];
    char str2[100];
    char frase[] = {"No meio do caminho tinha uma pedra. Tinha uma pedra no meio do caminho."};

    printf("A frase é: %s\n", frase);

    printf("\nDigite uma palavra da frase para para ser substituida: ");
    gets(str1);

    printf("\nDigite a palavra que substituira: ");
    gets(str2);

    /*

    for (int i = 0; i < strlen(frase); i++)
    {
        if (frase[i] == ' ') //procura o primeiro espaco da frase
        {
            count = i; //salva a posicao do primeiro espaco
            for (int j = 0; j < count; j++) //transfere a palavra inteira de antes do espaco pra um vetor comparador
            {
                comparador[j] = frase[j];
            }

            if (strcmp(comparador, str1) == 0) //compara essa palavra com a eleita a ser removida, e se for congruente será substituida
            {
                for (int j = i; j < strlen(frase); j++)
                {
                    interm[j-i] = frase[j];
                }
                strcat(str2, interm);
            }
        }
    }
    */
    

    for (int i = 0; i < strlen(frase); i++)
    {
        if ((frase[i] != ' ')||(frase[i] != '.'))
        {
            for (int j = 0; j < count; j++)
            {
                interm[i] = strcat(interm[i], );
            }
            
        }
        
    }
    

    

    return 0;
}