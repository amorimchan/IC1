#include <stdio.h>

int main(){

    int A[2][2], B[2][2], C[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("A[%d%d]: ", i, j);
            scanf("%d", &A[i][j]);

            printf("B[%d%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for (int linha = 0; linha < 2; linha++)
        for (int coluna = 0; coluna < 2; coluna++)
            for (int k = 0; k < 2; k++) 
            {
                C[linha][coluna] = A[linha][k]*B[k][coluna];
            }
            
    return 0;
}