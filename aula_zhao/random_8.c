#include <stdio.h>

int main(){
    //+...+n/(2n-1)!
    double v1 = 0, v2 = 1, n, n2;

    n = 2;

    for (int i = 1; i <= n; i++)
    {
        /*for (int l = 1; l <= (2*i-1); l++){
            v2 *= l;
            }*/

        v2 *= i;
        v1 += (i/v2);
    }

    printf("a soma e = %0.2lf", v1);
    

    return 0;
}
