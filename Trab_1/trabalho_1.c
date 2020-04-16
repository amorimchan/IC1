#include <stdio.h>
#include <math.h>

int main()
{
    int a, i, k = 1; float maior = 0, menor = 0, var = 0, MA;

    float notas[5];
    float pesos[5];

    while (k != 2)
    {
        //display das opçoes e possibilidade de escolha por parte do usuário
        printf("\nSelecione uma opcao: \n");
        printf("\n(1) Adicionar suas notas\n");
        printf("(2) Media aritmetica simples\n");
        printf("(3) Media ponderada\n"); //colocar os pesos está no caso 2
        printf("(4) Desvio padrao\n");
        printf("(5) Maior e menor notas\n");
        printf("(6) Adicionar suas notas\n");
        printf("(7) Para fechar o programa\n");
        printf("\nEscolha qual operacao deseja realizar: ");
        scanf("%d", &a);

        if (a == 1)
        {
            for (int i = 0; i < 5; i++)
            {
                printf("coloque a nota %d: ", i+1);
                scanf("%f", &notas[i]);
            }
            k = 3;
            break;
        }
        else if ((k == 3)||(a == 7))
        {
            k = 2;
            break;
        }
        else
        {
            printf("\n*************************************");
            printf("\ncoloque suas notas antes de continuar\n");
            printf("*************************************\n");

        }
        
    }
    

    switch (a)
    {
    case 2:
        printf("A media aritmetica eh: %0.2f", (notas[0] + notas[1] + notas[2] + notas[3] + notas[4])/5);
        break;

    case 3:
        for (int i = 0; i < 5; i++)
        {
            printf("Coloque o peso da nota %d: ", i+1);
            scanf("%f", pesos[i]);
        }
        printf("A media ponderada eh: %0.2f", (pesos[0]*notas[0] + pesos[1]*notas[1] + pesos[2]*notas[2] + pesos[3]*notas[3] + pesos[4]*notas[4])/(pesos[0]+pesos[1]+pesos[2]+pesos[3]+pesos[4]));
        break;

    case 4:
        MA = (notas[0] + notas[1] + notas[2] + notas[3] + notas[4])/5;
        printf("O desvio padrao de suas notas e' %0.3f", sqrt(pow(notas[0] - MA, 2) + pow(notas[1] - MA, 2) + pow(notas[2] - MA, 2) + pow(notas[3] - MA, 2)+ pow(notas[4] - MA, 2)));
        break;

    case 5:
        menor = maior = notas[0];

        for(i=1; i<5; i++)
        {
            if (notas[i] > maior)
            {
                maior = notas[i];
            }
            else if (notas[i] <= menor)
            {
                menor = notas[i];
            }          
        }
        printf("A maior nota e' %0.2f e a menor e' %0.2f", maior, menor);
        break;
    }
}


/*
    do
    {
        //display das opçoes e possibilidade de escolha por parte do usuário
        printf("\nOpcoes possiveis (suas notas serão adicionadas após selecionar uma opcao): \n");
        printf("\n(1) Adicionar suas notas\n");
        printf("(2) Media aritmetica simples\n");
        printf("(3) Media ponderada\n"); //colocar os pesos está no caso 2
        printf("(4) Desvio padrao\n");
        printf("(5) Maior e menor notas\n");
        printf("(6) Adicionar suas notas\n");
        printf("(7) Para fechar o programa\n");
        printf("\nEscolha qual operacao deseja realizar: ");
        scanf("%d", &a);

        //condição do maior e menor

        if (a == 7)
        {
            break;
        }
        else if (a == 1)
        {
            for (int i = 0; i < 5; i++)
            {
                printf("coloque a nota %d: ", i+1);
                scanf("%f", &notas[i]);
            }
        }
        else
        {
            printf("coloque suas notas antes de continuar");
            return;
        }
        
       
    } while ((a < 1)||(a > 7)||(a == 5));
    */