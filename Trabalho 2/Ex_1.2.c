#include<stdio.h>
#include<string.h>



char posichar(char *s, const char c)
    {
        for (int i = 0; i < strlen(*s); i++)
        {
            if (s[i] == )
            {
                
            }
            
        }
        
    }

int main()
{
    char string[] = {"atirei o pau no ga to to, mas o ga to to."};
    char substring[100];
    char comparador[100];

    scanf("%c", &substring);

    
    for (int i = 0; i < strlen(string); i++) //PEGA OS NUMEROS DOS ESPACOS DENTRO NA STRING
    {
        if (string[i] == ' ')
        {
            espnum[k+1] = i;
            k++;
            printf("%d\n", espnum[k-1]);
        }
    }


    return 0;
}