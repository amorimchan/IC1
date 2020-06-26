#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{

    int i, k = 6;
    int intersec[k];

    //intersec = (int *) malloc(k);

    for (i = 0; i < k; i++)
    {
        intersec[i] = i;
    }

    int v = (sizeof intersec)/4;

    printf("%d", v);

    
    printf("\nos valores dentro do vetor são: {");

    for (i = 0; i < (sizeof intersec)/4; i++)
    {
        printf("'%d', ", intersec[i]);
    }
        
        printf("}");

    return 0;
}