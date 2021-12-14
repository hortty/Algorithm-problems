/*
Problem: 1099 Soma de Impares Consecutivos II
*/

#include <stdio.h>

int main()
{
    int a,b[10000],c[10000],i,d[10000];
    
    scanf ("%d", &a);
    for (i=0;i<a;i++) {
        scanf ("%d", &b[i]);
        scanf ("%d", &c[i]);
        if (b[i] > c[i]) {
            b[i] = b[i] - 1;
        while (b[i] > c[i]) {
            if (b[i]%2!=0) {
                d[i] = d[i] + b[i];
            }
            b[i] = b[i] - 1;
        }
        }
        else if (c[i] > b[i]) {
            c[i] = c[i] - 1;
        while (c[i]>b[i]) {
            if (c[i]%2!=0 && c[i]!=b[i]) {
                d[i] = d[i] + c[i];
            }
            c[i] = c[i] - 1;
        }
        }
        }
    for (i=0;i<a;i++) {
        printf ("%d\n", d[i]);
    }

    return 0;
}