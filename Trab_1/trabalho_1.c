#include <stdio.h>
#include <math.h>

int main()
{
    //variaveis que serao utilizadas
    int a; //receberá a opcao desejada
    float maior = 0, menor = 0; //receberão a maior e a menor nota, respectivamente
    float MA; //receberá a media aritmetica
    float k = 0, l = 0; //receberão, respectivamente, a soma das multiplicacoes entre notas e pesos, e a soma dos pesos
    int ntdf = 0; //variavel responsavel por checar de as notas foram definidas ou não

    float notas[5]; //vetor responsável por armazenar as notas
    float pesos[5]; //vetor responsável por armazenar os pesos das notas


    do
    {
        
        //display das opçoes de operacoes
        printf("\nSelecione uma opcao: \n");
        printf("\n(1) Adicionar suas notas\n");
        printf("(2) Media aritmetica simples\n");
        printf("(3) Media ponderada\n");
        printf("(4) Desvio padrao\n");
        printf("(5) Maior e menor notas\n");
        printf("(0) Fechar o programa\n");
        printf("\nEscolha qual operacao deseja realizar: ");
        scanf("%d", &a);

        if ((ntdf == 1)&&(a != 0)) //realiza as operacoes se houverem notas definidas
        {
            switch (a)
            {
                
               case 1:
                    printf("\nvoce ja digitou suas notas, escolha outra opcao (para troca-las reinicie o programa)\n");
                    continue;
                

                case 2: //caso responsável por realizar a média aritmetica e devolver o valor 
                    printf("A media aritmetica e': %0.2f", (notas[0] + notas[1] + notas[2] + notas[3] + notas[4])/5); 
                    continue;


                case 3: //caso responsável por realizar a média ponderada, recebendo os pesos separadamente para a realizacao da operacao
                    for (int i = 0; i < 5; i++) //"for" responsável por pedir repedidas vezes as notas 
                    {
                        printf("Coloque o peso da nota %d: ", i+1);
                        scanf("%f", pesos[i]);
                    }

                    for (int j = 0; j < 5; j++) //"for" responsável por relizar a soma da multiplicacao entre os pesos e suas respectivas notas
                    {                           //tambem responsavel por somar os pesos
                        k += pesos[j]*notas[j];
                        l += pesos[j];
                    }

                    printf("A media ponderada e': %0.2lf", k/l);
                    continue;


                case 4: //caso responsavel por realizar o desvio padrao
                    MA = (notas[0] + notas[1] + notas[2] + notas[3] + notas[4])/5; //media aritmetica
                    printf("O desvio padrao de suas notas e' %0.3f", sqrt((pow(notas[0] - MA, 2) + pow(notas[1] - MA, 2) + pow(notas[2] - MA, 2) + pow(notas[3] - MA, 2)+ pow(notas[4] - MA, 2))/5)); //operacao do desvio padrao 
                    continue;                                                                                                                                                                        


                case 5: //caso responsavel por separar as maiores e as menores notas
                    menor = maior = notas[0];

                    for(int i=1; i<5; i++)               //Antes do laco 'for' as variaveis "menor" e "maior" recebem o primeiro valor (nota) armazenado no vetor.
                    {                                //Dentro do laco 'for' ocorre uma comparacao entre o valor notas[i] e o armazenado nas variaveis.
                        if (notas[i] > maior)        //Assim, se maior, será atriuido à variável "maior",se menor, será atribuido à variável "menor".
                        {                            
                            maior = notas[i];        
                        }
                        else if (notas[i] <= menor)
                        {
                            menor = notas[i];
                        }          
                    }
                    printf("A maior nota e' %0.2f e a menor e' %0.2f", maior, menor);
                    continue;
            }
            continue;
        }
        else if ((ntdf == 0)&&(a != 0)) //solicita as notas se ainda não estiverem definidas
        {
            printf("\nantes de selecionar uma operacao coloque suas notas\n");
            for (int i = 0; i < 5; i++)
            {
                printf("coloque a nota %d: ", i+1);
                scanf("%f", &notas[i]);
            }
            ntdf = 1;
            continue;
        }

    } while ((a != 0));

    return 1;

}