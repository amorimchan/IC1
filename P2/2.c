#include<stdio.h>


int multiplo(int *x, int n) //recebe um vetor x com n posicoes
{
    int i, contador = 0;
    

    for (i = 0; i < n; i++)
    {
        if ((x[i]%11) == 0) //se o número for multiplo de 11 o contador soma 1
            contador++;
    }

    return contador;
    
}


int main()
{
    int vetor[100];
    int resultado;

    for (int i = 0; i < 100; i++)
    {
        vetor[i] = i;
    }
    

    

    resultado = multiplo(vetor, 100); //funciona para qualquer n

    printf("%d", resultado);

    return 0;
}

