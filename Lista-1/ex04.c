#include <stdio.h>
#include <math.h>
/*Escreva um algoritmo que calcule o custo anual de um funcion´ario para uma empresa
dado o sal´ario pretendido. Sabe-se que sobre o sal´ario o empregador dever´a pagar
as seguintes taxas ou contribui¸c˜oes: 8% de FGTS do valor mensal, 8% de FGTS do
valor anual, f´erias de 30 dias acrescida de 1/3 deste valor, 8% de INSS e mais 6%
de vale transporte.*/

void main(){
    float salario, fgts_m, fgts_a, ferias, inss, transporte;

    fgts_m = 0.08 * salario;
    fgts_a = 0.08 * (12 * salario);
    ferias = salario / 3;
    inss = 0.08 * salario;
    transporte = 0.06 * salario;
}