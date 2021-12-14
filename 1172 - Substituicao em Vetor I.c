/*
Problem: 
1172 - Substituicao em Vetor I
*/

#include <stdio.h>

int main()
{
    int a[100], i=0;
    for (i;i<10;i++) {
        scanf ("%d", &a[i]);
        if (a[i] <= 0) {
            printf ("X[%d] = 1\n", i);
        }
        else {
            printf ("X[%d] = %d\n", i, a[i]);
        }
    }

    return 0;
}