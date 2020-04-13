#include <stdlib.h>


int main(){

    int v1, i = 0;
        
    printf("Bem vindo ao jogo de adivinhacao! Nele o objetivo e' acertar o numero sorteado aleatoriamente. Boa sorte!\n");

    v1 = rand() % 11;

    while (1)
    {
        int v2;

        printf("\nColoque seu numero: ");
        scanf("%d", &v2);

        if (v2 > v1)
        {
            printf("\nseu numero e' maior do que o sorteadon, tente novamente.\n\n*****************************************************************\n\nTente novamente\n");
            i += 1;
            continue;
        }
        else if (v2 < v1)
        {
            printf("\nseu numero e' menor do que o sorteado.\n\n*****************************************************************\n\nTente novamente\n");
            i += 1;
            continue;
        }
        else
        {
            i += 1;
            printf("\nparabens, voce acertou o numero sorteado levando um total de %d tentativas.", i);
            break;
        }

    }
}