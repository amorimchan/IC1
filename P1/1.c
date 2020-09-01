#include<stdio.h>

int main()
{
    double tamanho, x = 0; //declaracao das variaveis
    int i;

    printf("coloque o tamanho da soma: ");
    scanf("%lf", &tamanho); //aqui recebe o tamanho do n da soma

    for (i = 1; i <= tamanho; i++) //faz o calculo usando um laco for que vai se repetir n vezes, sendo n o "tamanho"
    {
        x += (2*tamanho)/(4*tamanho-3);
    }

    printf("o tamanho da soma é: %lf", x); //devolve o valor

    return 0;
}