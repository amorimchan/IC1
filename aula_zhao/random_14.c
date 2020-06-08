#include<stdio.h>

int main(){

    int vt1[] = {1, 2, 3, 4, 5};
    int vt2[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int vt3[100];
    int count = 0, i, j;
    

    for(i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            if (vt1[i] == vt2[j])
            {
                vt3[count] = vt1[i];
                count += 1;
                break;
            }
        }
    }
    return 0;
}
