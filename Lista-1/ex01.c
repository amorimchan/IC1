#include <stdio.h>

void main()
{
    int a, b, c;
    printf("Digite tres numeros: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a + b < c)
    {
        printf("%d somado a %d e' menor que %d", a, b, c);
    }
    else if (a + b > c)
    {
        printf("%d somado a %d e' maior que %d", a, b, c);
    }
    else
    {
        printf("%d somado a %d e' igual a %d", a, b, c);
    }
    
    
    
}


