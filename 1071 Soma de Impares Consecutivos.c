/*
Problem: 1071 Soma de Impares Consecutivos
*/

#include <stdio.h>

int main()
{
    int a,b;
    int i=0;
    scanf ("%d %d", &a, &b);
    if ( a == b ) {
        printf ("%d\n", i);
    }
    else if (a<b) {
        if (a<0) {
        a = a + 1;
        for (a;a<b;a++) {
            if (a%2!=0) {
                i = i + a;
            }
        }
        printf ("%d\n", i);
        }
        else {
           for (a;a<b;a++) {
            if (a%2!=0) {
                i = i + a;
            }
        }
        printf ("%d\n", i);
        }
    }
    else if (b<a) {
        if (b<0) {
            b = b + 1;
            for (b;b<a;b++) {
            if (b%2!=0) {
                i = i + b;
            }
        }
        printf ("%d\n", i);
        }
        else {
        for (b;b<a;b++) {
            if (b%2!=0) {
                i = i + b;
            }
        }
        printf ("%d\n", i);
        }
    }
    
    

    return 0;
}