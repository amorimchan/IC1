#include <stdio.h>

int main(){
    int n, v1, k, v2, v3, result;
    
    n = 4;
    v1 = 1;
    v2 = 1;
    v3 = 1;
    k = 2;
    
    /*for (int i = 1; i <= n; i++){
        v1 *= i;
        if (i == k){
            v2 = v1;
        }
        if (i == n-k){
            v3 = v1;
        }
        
        
    }*/

    /*int fatorial(int n){     //usando recursão
        if (n > 0)
        {
            return fatorial(n-1)*n
        }
        else
        {
            return 1
        }
        
        
    }*/
    

    for (int i = 1; i <= n; i++)
    {
        v1 *= i;
    }

    for (int i = 1; i <= k; i++)
    {
        v2 *= i;
    }

    for (int i = 1; i <= (n - k); i++)
    {
        v3 *= i;
    }

    result = v1/(v2*v3);

    printf("resultado e' %d", result);
    return 0;
}