/*
Problem: 
1183 - Acima da Diagonal Principal
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
    
    for (j=1;j<=11;j++) {
        for (i=0;i<=lim;i++) {
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