/*
Problem: 1078 Tabuada
*/

#include <stdio.h>
int main()
{
    int a=0,i,result;
    scanf ("%d", &a);
    for (i=1;i<11;i++) {
        result = i*a;
        printf ("%d x %d = %d\n", i, a, result);
    }
    return 0;
}