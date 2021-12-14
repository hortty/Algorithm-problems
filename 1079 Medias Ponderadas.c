/*
Problem: 1079 Medias Ponderadas
*/

#include <stdio.h>
int main()
{
    int a=0,i,j,h;
    float b[10000],result[10000];
    
    scanf ("%d", &a);
    for (j=0;j<a;j++) {
        for (i=0;i<3;i++) {
        scanf ("%f", &b[i]);
        result[j] = ((b[0]*2)+(b[1]*3)+(b[2]*5))/10;
        }
    }
    for (h=0;h<a;h++) {
            printf ("%.1f\n", result[h]);
        }
    return 0;
}