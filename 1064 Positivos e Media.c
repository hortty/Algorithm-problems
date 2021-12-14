/*
Problem: 1064 Positivos e Media
*/

#include <stdio.h>

int main()
{
    double num[6];
    int a=0,i=0;
    double b=0;
    
    for (i;i<6;i++) {
        scanf ("%lf", &num[i]);
        if (num[i]>0) {
            a++;
            b = b + num[i];
        }
    }
    b = b/a;
    printf ("%d valores positivos\n", a);
    printf ("%.1f\n", b);
    

    return 0;
}