#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int *intersec;

    int i, k = 10;

    intersec = (int *) malloc(k);

    for (i = 0; i < 7; i++)
    {
        intersec[i] = i;
    }

    printf("%d", sizeof intersec);

    
    printf("\nos valores dentro do vetor são: {");

    for (i = 0; i < sizeof (intersec)+1; i++)
    {
        printf("'%d', ", intersec[i]);
    }
        
        printf("}");

    return 0;
}