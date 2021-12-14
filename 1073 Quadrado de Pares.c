/*
Problem: 1073 Quadrado de Pares
*/

#include <stdio.h>

int main()
{
    int a=0,b=0,i=0;
    scanf ("%d", &a);
    for (i=1;i<=a;i++) {
        if (i%2 == 0) {
            b = i * i;
            printf ("%d^2 = %d\n", i, b);
        }
    }

    return 0;
}