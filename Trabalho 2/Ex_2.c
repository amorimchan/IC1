#include<stdio.h>
#include<string.h>

//Faca um programa que leia dois numeros 'n' e 'm' e:
// -Crie e leia um vetor de inteiros de n posicões
// -Crie e leia um vetor de inteiros de m posicões
// -Crie e conostrua um vetor de inteiros que seja a intersecão entre os dois vetores anteriores (que contém apenas os números que estão em ambos os vetores)
//      -Obs: não deve conter números repetidos


int posipl(char *s, char *sub)
{
    char c = sub[0];
    printf("%c", s[0]);
}


int main (){

 /*
char *strchr(const char *s, char c)
{
    while (*s != c)
        if (!*s++)
            return 0;
    return (char *)s;
}


char *charstr(const char *s, char c)
{
    int posiletra[strlen(string)];
    int a = 1; //var identificadora binaria
    int k = 0; //var de posicões no vetor receptor
    while (a != 0)
        if (*s != c)
            *s++;
        else if (*s == c)
        {
            posiletra[k] = *s;
            k++;
        }
        
}


char posichar(char *s, const char c)
    {
        for (int i = 0; i < strlen(*s); i++)
        {
            if (s[i] == )
            {
                
            }
            
        }
        
    }
    */

   char string[] = {"atirei o pau no ga to to, mas o ga to to."}; //vou receber isso na funcão
   char substring[] = {"o pau no"};                               //tbm vou receber isso na funcão

    posipl(string, substring);
    
    return 0;
}