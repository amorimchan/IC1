#include <stdio.h>

/*Fa¸ca um algoritmo que leia duas notas parciais (p1, p2) de um estudante. O algoritmo deve calcular a m´edia ponderada alcan¸cada, considerando os pesos (2 × p1 +
3 × p2) e apresentar como resultado “Aprovado”, caso a m´edia seja maior ou igual
a cinco, “Recupera¸c˜ao”, para a m´edia fique entre 3,0 e 4,9 e, “Repreovado” caso
m´edia seja menor do que 3,0.*/

void main(){
    float p1, p2, m;
    printf("Coloque suas duas notas parciais: ");
    scanf("%f%f", &p1, &p2);

    m = ((2 * p1) + (3 * p2))/5;

    if(m >= 5){
        printf("\n\nparabens voce foi aprovado com nota %0.2f!", m);
    }
    else if (5.0 < m <= 3.0){
        printf("\n\nvoce esta de recuperacao com a nota %0.2f", m);
    }
    else{
        printf("\n\nvoce esta reprovado com a nota %0.2f", m);
    }
}