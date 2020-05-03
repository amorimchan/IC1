#include <stdlib.h>
#include <stdio.h>

int main(){

    int v1, i = 0; //respectivamente, variavel que armazena o numero sorteado e contador de tentativas
        
    printf("Bem vindo ao jogo de adivinhacao! Nele o objetivo e' acertar o numero sorteado aleatoriamente. Boa sorte!\n");

    v1 = rand() % 101; //atribuicao do valor aleatorio à variavel v1

    while (1) //loop que só será quebrado quando o usuário acertar o número sorteado
    {
        int v2; //variavel que receberá o numero chutado pelo usuário e será comparada com o número sorteado 

        printf("\nColoque seu numero: ");
        scanf("%d", &v2);

        if (v2 > v1) //compara o numero sorteado e o chutado para saber se é maior
        {
            printf("\nseu numero e' maior do que o sorteado, tente novamente.\n\n*****************************************************************\n\nTente novamente\n");
            i += 1;
            continue;
        }
        else if (v2 < v1) //compara o numero sorteado e o chutado para saber se é menor
        {
            printf("\nseu numero e' menor do que o sorteado.\n\n*****************************************************************\n\nTente novamente\n");
            i += 1;
            continue;
        }
        else //anuncia que o ussuário acertou o número e dá o número de tentativas necessárias
        {
            i += 1;
            printf("\nparabens, voce acertou o numero sorteado levando um total de %d tentativas.", i);
            break;
        }
    }
}