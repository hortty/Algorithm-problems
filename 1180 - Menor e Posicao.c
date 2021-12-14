/*
Problem: 
1180 - Menor e Posicao
*/

#include <stdio.h>

int main()
{
    int n[1001], a=0, val=10000, i=0, j=0, mp=0;
    
    scanf ("%d", &a);
    for (i=0;i<a;i++) {
        scanf ("%d", &n[i]);
        if (val > n[i]) {
            val = n[i];
            mp = i;
        }
    }
    
    
    
    printf ("Menor valor: %d\n", val);
    printf ("Posicao: %d\n", mp);

    return 0;
}