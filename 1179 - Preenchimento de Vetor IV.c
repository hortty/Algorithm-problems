/*
Problem: 
1179 - Preenchimento de Vetor IV
*/

#include <stdio.h>

int main()
{
    int i=0,j=15,v=0,e=0,o=0,par[15],impar[15], u=0;
    
    for (u;u<j;u++) {
        scanf ("%d", &i);
        if (i%2==0) {
            par[v]=i;
            v++;
            if (v==5) {
                for (o=0;o<5;o++) {
                    printf ("par[%d] = %d\n", o, par[o]);
                }
                v=0;
            }
        }
        else {
            impar[e]=i;
            e++;
            if (e==5) {
                for (o=0;o<5;o++) {
                    printf ("impar[%d] = %d\n", o, impar[o]);
                }
                e=0;
            }
        }
    }
    
    if (e>0) {
        for (o=0;e>o;o++) {
                    printf ("impar[%d] = %d\n", o, impar[o]);
                }
    }
    if (v>0) {
        for (o=0;v>o;o++) {
                    printf ("par[%d] = %d\n", o, par[o]);
                }
    }

    return 0;
}