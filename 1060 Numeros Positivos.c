/*
Problem: 1060 Numeros Positivos
*/

#include <stdio.h>

int main()
{
    float a[5];
    int i=0, b=0;
    for (i;i<=5;i++) {
        scanf ("%f", &a[i]);
        if (a[i]>0) {
            b++;
        }
    }
    printf ("%d valores positivos", b);
    
    printf ("\n");
    
    return 0;
}