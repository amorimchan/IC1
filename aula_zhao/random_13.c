#include<stdio.h>
#include<string.h>

int main(){

    int matriz[3][3];

    for (int j = 0; j < 3; j++)
    {
        for (int k = 0; k < 3; k++)
        {
            printf("\ncoloca valor na matriz %d%d ai: ", j+1, k+1);
            scanf("%d", &matriz[j][k]);
        }
    }
    

    for (int i = 0; i < 3; i++)
    {
        for (int c = 0; c < 3; c++)
        {
            if (matriz[i][i] != matriz[i][c])
                printf("\n%d", matriz[i][c]); 
        }
        
    }
    

    return 0;
}
