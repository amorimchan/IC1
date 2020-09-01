#include<stdio.h>

int main()
{
    int numeros[10];
    int ordem[10];
    int i, j, maior, menor, intermed, temp, n = 3;

    for (i = 0; i < 3; i++)
    {
        printf("coloque o número inteiro de posicao %d: ", i+1);
        scanf("%d", &numeros[i]);
    }
    
    //algoritmo de ordenacão do vetor
    for (i = 0; i < n; i++) //vai realizar a comparacão 3 vezes
    {
        for (j = 0; j < (n - i - 1); j++) //vai comparar as posicoes com suas conseguintes e se forem diferentes vai troca-las entre si
        {
            if (numeros[j] > numeros[j + 1]) //se a posicao j for maior q a j+1 ele vai trocar os valores dentro dessas posicoes entre si
            {
                temp = numeros[j]; //variavel que armazena a posicao j pra que ela possa ser trocada 

                numeros[j] = numeros[j + 1]; //troca posicao j por j+1
                numeros[j + 1] = temp; //troca j+1 pela posicao j armazenada
            }
        }
    }


    for (i = 0; i < 3; i++)
    {
        printf("%d\n", numeros[i]);
    }


    return 0;
}