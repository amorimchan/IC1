#include<stdio.h>

int main()
{
    int m[30][40];
    int linha, coluna;
    int temp; //variavel temporária que vai armazenar o valor de uma posicão no vetor antes da mesma ser trocada

    //parte onde os valores do vetor são recebidos
    for (linha = 0; linha < 30; linha++)
    {
        for (coluna = 0; coluna < 40; coluna++)
        {
            printf("elemento para m[%d][%d]: ", linha+1, coluna+2);
            scanf("%d", &m[linha][coluna]);
        }
    }

    //print da matriz no terminal (nada muito elaborado)
    for (linha = 0; linha < 30; linha++)
    {
        for(coluna = 0; coluna < 40; coluna++)
        {
            printf("%d     ", m[linha][coluna]);
        }
        printf("\n");
    }

    //print de espacos entre uma matriz e a outra só pra deixar visualmente bonito
    for (int j = 0; j < 3; j++)
    {
        printf("\n");
    }
    
    //troca da linha 1 e 2
    for (int i = 0; i < 40; ++i)
    {
        temp = m[1][i];

        m[1][i] = m[0][i]; //primeiro troca-se o elemento m[1][i](linha 2) pelo correspondente na linha anterior
        m[0][i] = temp; //depois troca-se o elemento m[0][i](linha 1) pelo correspondente na linha posterior (que foi armazenado na variavel temporária)
    }

    //print da matriz já invertida (mesma coisa do print anterior)
    for (linha = 0; linha < 30; linha++)
    {
        for(coluna = 0; coluna < 40; coluna++)
        {
            printf("%d     ", m[linha][coluna]);
        }
        printf("\n");
    }
    

    return 0;
}