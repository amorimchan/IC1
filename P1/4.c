#include<stdio.h>

void maior_menor(int *num, int n, int *maior, int *menor) //n é o tamanho do vetor
{
    int i; //i é o contador do for

    *menor = *maior = num[0];

    for(int i = 0; i < n; i++)      //Antes do laco 'for' as variaveis "menor" e "maior" recebem o primeiro valor armazenado no vetor num.
    {                               //Dentro do laco 'for' ocorre uma comparacao entre o valor num[i] e o armazenado nas variaveis.
        if (num[i] > *maior)        //Assim, se maior, será atriuido à variável "maior",se menor, será atribuido à variável "menor".                          
            *maior = num[i];  

        else if (num[i] <= *menor)
            *menor = num[i];       
    }
}


int main()
{
    int numeros[5];
    int ma, me;
 
    printf("atribua numeros ao vetor:\n");
    
    for (int k = 0; k < 5; k++)
    {
        scanf("%d", &numeros[k]);
    }

    maior_menor(numeros, 5, &ma, &me);

    printf("%d\n", ma);
    printf("%d\n", me);    


    return 0;
}