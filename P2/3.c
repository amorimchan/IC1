#include<stdio.h>

int comp(int *v1, int *v2, int n) //recebe os vetores e o tamanho dos vetores
{

    for (int i = 0; i < n; i++)
    {
        if (v1[i] != v2[i]) //se forem diferentes a funcao retorna 0
            return 0;
    }

    return 1; //se não, retorna 1
}


int main()
{
    int vetor1[500];
    int vetor2[500];
    int resultado;

    for (int i = 0; i < 500; i++)
    {
        vetor1[i] = i;
        vetor2[i] = i;
    }
    

    resultado = comp(vetor1, vetor2, 500);

    printf("resultado: %d", resultado);
    
    return 0;
}