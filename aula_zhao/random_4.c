#include<stdio.h>
//exercício de fatorial
int main()
{
    int n, a = 1;
    printf("coloca ai o fatorial q vc quer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        a = a*i;
        printf("%d\n", a);
    }
    printf("\nvalor final e' %d", a);
}