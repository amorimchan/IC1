#include <stdio.h>
int main(){

    double menor, maior, k;
    double vetor[5];
    int i;
    

    //recebe os valores
    for (i = 0; i < 5; i++)
    {
        printf("bota ai inteiro: ");
        scanf("%lf", &vetor[i]);
    }
    
    menor = vetor[0];
    maior = vetor[0];
    
    //maior menor
    for(i = 1; i < 5; i++)
    {

        maior = maior < vetor[i] ? vetor[i] : maior;

        menor = vetor[i] <= menor ? vetor[i] : menor;
      
    }

    //calcula a soma de todos os numeros
    for (i = 0; i < 5; i++)
    {
        k += vetor[i];
    }

    printf("o maior e' %lf, o menor e' %lf, e a media e' %0.2lf", maior, menor, k/5);
    
    return 0;
}