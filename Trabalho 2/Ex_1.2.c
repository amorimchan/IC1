#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int posipl(char *string, char *to_find)
{

    int compare(char*s1, char *s2, int n)
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

    char c = to_find[0];
    int z;
    int n = strlen(to_find);

    while (*string != '\0')
    {
        if (*string == c && compare(string, to_find, n) == 0)
        {
            return z;
        }
        else
        {
            z++;
            string++;
        }
        
    }

    return 0;
    
}

//funcao do trabalho PRECISA DAS BIBLIOTECAS "stdio.h" e "string.h" 
int posipl2(char *string, char *to_find) //*string é a string e to_find a substring
{

    char c = to_find[0]; //a variavel c vai receber a primeira letra da substring p poder procurar por ela mais tarde
    int z = 0, i, bool = 1; //z é responsavel por armazenar o indice que vai ser devolvido, enquanto bool é uma variavel de identificacao (0 ou 1)
    char *str1, *str2; //ponteiros que irão apontar para a string e substring na hora de procurar pela palavra

    int n = strlen(to_find); //tamanho da palavra armazenada na substring

    //nesse loop while o programa segue todos os elementos do vetor até chegar no 'nulo' \0
    while (*string != '\0')
    {
        if (*string == c) //aqui ele compara se o caracter apontado por *string é igual ao primeiro caracter da substring
        {                 //e se for verdade, vai ocorrer uma verificacao da palavra que o sucede com a substring
            str1 = string; 
            str2 = to_find;

            while (n--) //loop de verificacão que vai rodar n vezes (sendo n o tamanho da substring)
            {
                if(*str1 != *str2) //se o conteudo apontado pelas duas for diferente, o programa muda o status de bool pra 0 e sai do while 
                {
                    bool = 0;
                    break;
                }
                else if(*str1 == *str2) //já se o conteudo for igual, str1++ e str2++ mantendo o status bool == 1
                {
                    str1++; 
                    str2++;
                }
            }
            if (bool == 1) //se bool == 1 (ou seja, o loop rodou n vezes onde o valor apontado por str1 e str2 eram iguais) a funcao retorna z 
            {
                return z;
            }
            else if (bool == 0) //se bool == 0 (ou seja, houve diferencas entre os valores apontados por str1 e str2 em algum momento), o programa continua verificando
                continue;
            n = strlen(to_find);//preparando n para a proxima verificacão
            z++; //somando 1 para o numero de posicoes andadas antes de partir para a proxima posicao do vetor para o qual *string aponta
            string++;
        }
        else //se o caracter apontado por *string não for igual ao primeiro da substring: 
        {
            z++; //conta +1 pro numero de espacos andados 
            string++; //altera o ponteiro para o indice seguinte do vetor
        }
    }
}


int main()
{
    char string[] = {"atirei o pau no ga to to, mas o ga to to."}; //vou receber isso na funcão
    char to_findstring[] = {"nao existo"};  //posicao 19                             //tbm vou receber isso na funcão
    int resultado = 0;

    resultado = posipl2(string, to_findstring);

    printf("%d\n", resultado);







    
    /*
    char comparador[100];

    // algoritmo de marcar as posicões das letras na frase
    char c = to_findstring[0];
    char *string = &string[0];
    int posiletra[strlen(string)]; //vetor q armazena a posicão das letras
    posiletra[0] = 0;
    int bool = 0; //comparador booleano para o do while
    int z = 0;
    int k = 1; //var de posicões no vetor posiletra

    while (*string != '\0')
    {
        if (*string != c)
            z++;
        else if (*string == c)
        {
            posiletra[k] = z;
            k++;
            z++;
        }
        *string++;
    }

    k = 0;

    do
    {
        int i = 0;
        for (int j = posiletra[k]; j <= posiletra[k + 1]; j++, i++) //como é to_findstring e n frase eu vou transferir tudo entre os espacos
        {   
                                                              //aqui eu to transferindo to_findstrings para outro vetor comparador
            comparador[i] = string[j];
            printf("%c\n", comparador[i]);
        }

        if (strcmp(comparador, to_findstring) == 0)
        {
            //return posiletra[k];
            printf("%d\n", posiletra[k]);
            bool = 1;
        }
        else
        {
            k++;
        }
        
    } while (bool != 1);
    */

    return 0;
}