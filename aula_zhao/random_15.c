#include<stdio.h>

int main(){

    char frase[100], nova_frase[100];
    int i, count = 0, countespaco = 0, countsemesp = 0;

    printf("Digite sua frase: ");
    gets(frase);

    for (i = 0; i < strlen(frase); i++)
    {
        if (frase[i] == ' ')
        {
            countespaco++;
        }
        else
        {
            nova_frase[countespaco] = frase[i];
            countespaco++;
        }
    }

    nova_frase[countsemesp] = '\0';
    
    printf("\n%s", nova_frase);

    printf("\n%d", countespaco);

    return 0;
}