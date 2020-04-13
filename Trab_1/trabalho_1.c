#include <stdio.h>
#include <math.h>

int main()
{
    int a, p1, p2, p3, p4, p5, i; float nota = 0, nota_1, nota_2, nota_3, nota_4, nota_5, maior = 0, menor = 0, var = 0, MA;

    do
    {
        //display das opçoes e possibilidade de escolha por parte do usuário
        printf("Opcoes possiveis: \n");
        printf("\n(1) Media aritmetica simples\n");
        printf("(2) Media ponderada\n"); //colocar os pesos está no caso 2
        printf("(3) Desvio padrao\n");
        printf("(4) Maior e menor notas\n");
        printf("(5) Para fechar o programa\n");
        printf("\nEscolha qual operacao deseja realizar: ");
        scanf("%d", &a);

        //condição do maior e menor

        if (a == 5)
        {
            break;
        }
        else if (a != 4)
        {
            printf("coloque as 5 notas: ");
            scanf("%f%f%f%f%f", &nota_1, &nota_2, &nota_3, &nota_4, &nota_5);
        }

    } while ((a < 1)||(a > 5));

    switch (a)
    {
    case 1:
        printf("A media aritmetica eh: %0.2f", (nota_1 + nota_2 + nota_3 + nota_4 + nota_5)/5);
        break;

    case 2:
        printf("Coloque os 5 pesos para as notas na respectiva ordem: ");
        scanf("%d%d%d%d%d", &p1, &p2, &p3, &p4, &p5);
        printf("A media ponderada eh: %0.2f", (p1*nota_1 + p2*nota_2 + p3*nota_3 + p4*nota_4 + p5*nota_5)/(p1 + p2 + p3 + p4 + p5));
        break;

    case 3:
        MA = (nota_1 + nota_2 + nota_3 + nota_4 + nota_5)/5;
        printf("O desvio padrao de suas notas e' %0.3f", sqrt(pow(nota_1 - MA, 2) + pow(nota_2 - MA, 2) + pow(nota_3 - MA, 2) + pow(nota_4 - MA, 2)+ pow(nota_5 - MA, 2)));
        break;

    case 4:
        printf("Coloque a nota 1: ");
        scanf("%f", &nota);
        menor = maior = nota;

        for(i=2; i<=5; i++)
        {
            printf("Coloque a nota %d: ", i);
            scanf("%f", &nota);

            if (nota > maior)
            {
                maior = nota;
            }
            /*else if (nota < maior && i == 2)
            {
                menor = nota;
            }*/
            else if (nota <= menor)
            {
                menor = nota;
            }          
        }
        printf("A maior nota e' %0.2f e a menor e' %0.2f", maior, menor);
        break;
    }
}
