#include <stdio.h>

//1+2+3+...+n
//exercício da aula do zhao
int main()
{
    int x, n, i;

    x = 0;

    printf("De um valor a n: ");
    scanf("%d", &n);

    for(i=0; i<=(2*n-1); i++)
    {
        x += i;
        //printf("%d \n", x);
    }

    printf("o valor final do x e': %d", x);
    return 0;
}