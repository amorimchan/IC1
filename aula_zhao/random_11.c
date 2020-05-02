#include <stdio.h>
#include <string.h>

void main(){

    char str[100];

    int tamanho;

    printf("digite seu nome: ");
    gets(str);

    printf("ola %s", str);

    tamanho = strlen(str);

    for (int i = 0; i <= tamanho; i++)
    {
        printf("ola %s", str);
    }
    

}