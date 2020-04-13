#include <stdio.h>
#include <math.h>
/*Construa um algoritmo para calcular as ra´ızes de uma equa¸c˜ao do segundo grau
(ax2 + bx + c), sendo que os valores de a, b e c s˜ao fornecidos pelo usu´ario.*/

void main(){
    float a, b, c, delta, x1, x2;
    printf("Digite valores pro a, b e c que compoem a equacao (ax^2 + bx + c): ");
    scanf("%f%f%f", &a, &b, &c);

    delta = pow(b, 2) - (4 * a * c);

    x1 = (-(b) + delta) / (2 * a);
    x2 = (-(b) - delta) / (2 * a);

    printf("as raizes (com duas casas de aproximacao decimal) sao:\n x1 = %0.2f e x2 = %0.2f", x1, x2);
}