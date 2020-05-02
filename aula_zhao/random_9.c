#include <stdio.h>

int main(){
    //+...+n/(2n-1)!

    double v1 = 0, v2 = 1, n = 2;

    for (int i = 1; i <= n; i++)
    {
        v2 *= (2*i - 1);
        v1 += i/v2;
    }
    
    printf("o valor e' %lf", v1);

    return 0;
}