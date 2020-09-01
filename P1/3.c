#include<stdio.h>
#include<math.h>

int main()
{
    double a, b, c, delta; //coeficientes e delta
    double x1, x2; //os dois resultados possiveis

    printf("digite o coeficiente 'a' da sua equacao: ");
    scanf("%lf", &a);


    printf("\ndigite o coeficiente 'b' da sua equacao: ");
    scanf("%lf", &b);


    printf("\ndigite o coeficiente 'c' da sua equacao: ");
    scanf("%lf", &c);

    delta = sqrt((pow(b, (double)2) - 4*a*c)); //calculo do delta usando sqrt (raiz quadrada) e pow (potencia) da biblioteca math.h

    x1 = (-b + delta)/2*a; //calculando a primeira raiz possível

    x2 = (-b - delta)/2*a; //calculando a segunda raiz possível

    printf("suas raizes sao:\n x1 = %lf\nx2 = %lf", x1, x2); //fazendo print dos resultados



    return 0;
}