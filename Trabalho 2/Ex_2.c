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
    int *vet1;
    int *vet2;
    int intersec;

    int n, m, i, j, k = 2, contador = 0;

    printf("De um valor inteiro a n: ");
    scanf("%d", &n);

    printf("\nDe um valor inteiro a m: ");
    scanf("%d", &m);

    vet1 = (int *) malloc(n);
    vet2 = (int *) malloc(m);

    if (n>m)
    {
        int intersec[m];
    }
    else
    {
        int intersec[n];
    }
    
    

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

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (vet1[i] == vet2[j])
            {
                intersec[contador] = vet1[i];
                contador++;
                printf("\n%d", j);
                break;
            }
        }
    }

    printf("\nos valores dentro do vetor são: {");

    for (i = 0; i < sizeof(intersec); i++)
    {
        printf("'%d', ", intersec[i]);
    }
    
    printf("}");
    
    return 0;
}