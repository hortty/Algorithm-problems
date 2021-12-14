/*
Problem: 1116 Dividindo X por Y
*/

#include <stdio.h>

int main()
{
    int i=0, u=0;
    float  result=0, x=0, y=0;
    
    scanf ("%d", &i);
    while (u<i) {
        scanf ("%f %f", &x, &y);
        result = x/y;
        if (y==0) {
            printf ("divisao impossivel\n");
        }
        else {
            printf ("%.1f\n", result);
        }
        u++;
    }

    return 0;
}