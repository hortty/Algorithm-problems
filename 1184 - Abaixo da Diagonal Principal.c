/*
Problem: 
1184 - Abaixo da Diagonal Principal
*/

#include <stdio.h>

int main()
{
    float m[12][12], total=0;
    int i=0,j=0, k=0, lim=0;
    char c;
    
    scanf ("%c", &c);
    
    for (i=0;i<12;i++) {
        for (j=0;j<12;j++) {
            scanf ("%f", &m[i][j]);
        }
    }
    
    for (i=1;i<=11;i++) {
        for (j=0;j<=lim;j++) {
            total+= m[i][j];
            k++;
        }
        lim++;
    }

    if (c == 'S') {
        printf ("%.1f\n", total);
    }
    if (c == 'M') {
        total = total/k;
        printf ("%.1f\n", total);
    }
    return 0;
}