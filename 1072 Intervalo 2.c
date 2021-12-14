/*
Problem: 1072 Intervalo 2
*/

#include <stdio.h>

int main()
{
    int n,i,j[10000],in=0,out=0;
    scanf ("%d", &n);
    
    for (i=0;i<n;i++) {
        scanf ("%d", &j[i]);
        if (j[i] >= 10 && j[i] <=20) {
            in++;
        }
        else {
            out++;
        }
    }
    
    printf ("%d in\n", in);
    printf ("%d out\n", out);

    return 0;
}