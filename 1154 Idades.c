/*
Problem: 1154 Idades
*/

#include <stdio.h>

int main()
{
    int a=0,b=0,i=0, j=0;
    float media=0;

    while (i == 0) {
        scanf ("%d", &a);
        if (a<0) {
            i=1;
        }
        else {
            media += a;
            j++;
        }
    }
    
    media = media/j;
    printf ("%.2f\n", media);

    return 0;
}