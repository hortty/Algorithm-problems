/*
Problem: 1095 Sequencia IJ 1
*/

#include <stdio.h>

int main()
{
    int a=1,b=60;
    while (b>0) {
        printf ("I=%d J=%d\n", a,b);
        b = b - 5;
        a = a + 3;
    }
    printf ("I=%d J=%d\n", a, b);
    

    return 0;
}