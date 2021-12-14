/*
Problem: 1097 Sequencia IJ 3
*/

#include <stdio.h>

int main()
{
    int a=0,b=0, c=8;
    for (a=1;a<=9;a=a+2) {
        for (b=0;b<3;b++) {
            c = c-1;
            printf ("I=%d J=%d\n", a, c);
        }
        c=c+5;
    }

    return 0;
}