/*
Problem: 1145 Sequencia Logica 2
*/

#include <stdio.h>

int main()
{
    int x=0,y=0, i=1, o;
    
    scanf ("%d %d", &x, &y);
    x = x-1;
    for (i;i<y;i++) {
        printf ("%d", i);
        i++;
        for (o=0;o<x;o++) {
            printf (" %d", i);
            i++;
        }
        i--;
        printf ("\n");
    }

    return 0;
}