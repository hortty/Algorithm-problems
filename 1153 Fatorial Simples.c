/*
Problem: 1153 Fatorial Simples
*/

#include <stdio.h>

int main()
{
    int n,a,i,total;
    
    scanf ("%d", &n);
    a = n;
    total = n;
    while (a > 1) {
        a--;
        total = total*a;
    }
    printf ("%d\n", total);
    

    return 0;
}