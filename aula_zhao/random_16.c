#include<stdio.h>

int main(){

    int N[10], M[10];
    int P = 0;

    for (int i = 0; i < 10; i++){
        printf("\ncoloque o numero %d do vetor N: ", i);
        scanf("%d", &N);

        printf("\ncoloque o numero %d do vetor M: ", i);
        scanf("%d", &M);
        
    }
    

    for (int i = 0; i < 10; i++){
        P +=  N[i]*M[i];
    }

    printf("\n\nO produto escalar entre N e M é %d", P);

    return 0;
}