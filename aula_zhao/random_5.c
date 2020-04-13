#include<stdio.h>
//exercício de fatorial
int main()
{
    int n, i; double a = 0;
    
    n = 3;

    for (i = 1; i <= n; i++)
    {
        a = a + (1.0/i);
        printf("%0.2lf\n", a);
    }
    printf("valor final e' %0.2lf", a);
}