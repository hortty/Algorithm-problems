/*
Problem: 1146 Sequencias Crescentes
*/

#include <stdio.h>

int main()
{
    int a=1,b=0,i=0;
    
    while (a != 0) {
        scanf ("%d", &b);
        a = b;
        if (b != 0) {
        while (i < b-1) {
            i++;
            printf ("%d ", i);
        }
            i++;
            printf ("%d\n", i);
        }
        i = 0;
    }
    
    

    return 0;
}