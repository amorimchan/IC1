#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//Faca um programa que leia dois numeros 'n' e 'm' e:
// -Crie e leia um vetor de inteiros de n posicões
// -Crie e leia um vetor de inteiros de m posicões
// -Crie e construa um vetor de inteiros que seja a intersecão entre os dois vetores anteriores (que contém apenas os números que estão em ambos os vetores)
//      -Obs: não deve conter números repetidos


int main ()
{
    int n, m, i, j, l, k = 0, contador = 0, bool = 0;
    int vet1[n];
    int vet2[m];
    int *intersec;; //tamanho m pq se m for maior vai sobrar memoria, se for o menor vai ter memoria o suficiente pra armazenar tudo

    printf("De um valor inteiro a n: ");
    scanf("%d", &n);

    printf("\nDe um valor inteiro a m: ");
    scanf("%d", &m);

    intersec = (int *) malloc(sizeof(int));

    if (n >= m)
      intersec = (int *) realloc(intersec, m*sizeof(int));
    else
      intersec = (int *) realloc(intersec, n*sizeof(int));



    for ( i = 0; i < n; i++)
    {
        printf("\ncoloque um numero inteiro para a posicao %d no vetor 1: ", i);
        scanf("%d", &vet1[i]);
    }

    printf("\n**********************************************************\n");

    for ( i = 0; i < m; i++)
    {
        printf("\ncoloque um numero inteiro para a posicao %d no vetor 2: ", i);
        scanf("%d", &vet2[i]);
    }

    for (i = 0; i < n; i++) //laco pro vet1[i]
    {
        for (j = 0; j < m; j++) //laco pra comparar o vet1[i] com o vet2[j]
        {
            if (vet1[i] == vet2[j]) //caso o conteudo dos dois seja igual
            {
                for (l = 0; l < (sizeof intersec)/4; l++) //o programa primeiro tenta achar se o valor de vet1[i] ja tava no vetor intesec
                {
                    if (vet1[i] == intersec[l])
                    {
                        bool = 1; //se ja tava, ele concede o valor 1 para a variavel booleana
                        break;
                    }
                    else
                        bool = 0; //se não estava, ele concede o valor 0
                }

                if (bool == 0) //se não estava no vetor intersec já, ele é atribuido ao vetor
                {
                    intersec[k] = vet1[i];
                    k++;
                    contador++;
                }
                else if (bool == 1) //se já estava, ele só mete um break
                {
                    break;
                }
            }
            else
                continue;
        }
    }

    printf("\nos valores dentro do vetor intersecao são: {");

    for (i = 0; i < contador; i++)
    {
        printf("'%d', ", intersec[i]);
    }
    
    printf("}\n");
    
    return 0;
}