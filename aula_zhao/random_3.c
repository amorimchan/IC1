#include <stdio.h>


int main()
{
    int x, n, i;

    x = 0;

    printf("De um valor a n: ");
    scanf("%d", &n);

    for(i=0; i<=n; i++)
    {
        x += i;
        printf("%d \n", x);
    }

    printf("o valor final do x e': %d", x);
    return 0;
}