#include<stdio.h>
#include<string.h>

int main(){
    int i, n;
    char nome[100];

    printf("Digite seu nome: ");
    gets(nome);

    n = strlen(nome);

    for(i = n-1; i >= 0; i--)
        printf("%c", nome[i]);
        printf("\n");



    return 1;
}