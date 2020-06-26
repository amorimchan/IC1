#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int posipl(char *string, char *to_find)
{
    int tamanho(char *k) //funcao responsavel por contar o tamanho de uma string
    {
        int contador = 0;

        while (*k != '\0')
        {
            contador++;
            k++;
        }
        return contador;
    }

    int compare(char*s1, char *s2, int n) //funcao que vai comparar dois pedacos de string de tamanho n
    {
        while(n--)
        {
            if( *s1 != *s2 )
                return 1;
            else
                s1++;
                s2++;
        }
        return 0;
    }

    //INICIO DO ALGORITMO PRA PROCURAR DE VERDADE

    char c = to_find[0]; //c recebe o primeiro caraceter da substring
    int z; //é o responsavel por contar a posicao no vetor
    int n = tamanho(to_find); //tamanho da substring

    while (*string != '\0') //enqunato o conteudo apontado pelo vetor string for diferente de \0
    {
        if (*string == c && compare(string, to_find, n) == 0) //se o conteudo apontado for igual ao conteudo de c e a comparacao entre o que os sucede com tamanho n for igual, retorna o z
        {
            return z;
        }
        else //se nao aumente um no z e pule o ponteiro para o proximo endereco do vetor
        {
            z++;
            string++;
        }
        
    }
    return 0;
}



int main()
{
    char string[] = {"No meio do caminho tinha uma pedra."}; 
    char to_findstring[] = {"inho"};

    printf("%d\n", posipl(string, to_findstring));

    return 0;
}