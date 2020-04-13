#include <stdio.h>

//1-2+3-4+5-6...+-n
//exercício da aula do zhao
int main()
{
    int x, n, i;

    x = 0;

    printf("De um valor a n: ");
    scanf("%d", &n);

    for(i=0; i<=n; i++)
    {
        if (i%2 == 0)
        {
            x -= i;
            printf("%d\n", x);
        }
        else
        {
            x += i;
            printf("%d\n", x);
        }        
    }
    printf("o valor final do x e': %d", x);
    return 0;
}