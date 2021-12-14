/*
Problem: 1074 Par ou Impar
*/

#include <stdio.h>

int main()
{
    int x=0,a[10000],i=0;
    scanf ("%d", &x);
    for (i=0;i<x;i++) {
        scanf ("%d", &a[i]);
    }
    for (i=0;i<x;i++) {
        if (a[i] == 0) {
            printf ("NULL\n");
        }
        else if (a[i]%2 == 0) {
            if (a[i]>0) {
                printf ("EVEN POSITIVE\n");
            }
            else if (a[i]<0) {
                printf ("EVEN NEGATIVE\n");
            }
        }
        else if (a[i]%2 != 0) {
            if (a[i]>0) {
                printf ("ODD POSITIVE\n");
            }
            else if (a[i]<0) {
                printf ("ODD NEGATIVE\n");
            }
        }
    }
    return 0;
}