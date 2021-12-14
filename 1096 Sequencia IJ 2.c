/*
Problem: 1096 Sequencia IJ 2
*/

#include <stdio.h>

int main()
{
    int a=0,b=7;
    for (a=1;a<=9;a=a+2) {
        for (b;b>=5;b--) {
            printf ("I=%d J=%d\n", a, b);
        }
        b = 7;
    }

    return 0;
}