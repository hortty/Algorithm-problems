/*
Problem: 1157 Divisores I
*/

#include <stdio.h>

int main()
{
    int a=0,i=0;
    
    
    scanf ("%d", &a);
    
    while (i<=a) {
        i++;
        if (a%i==0) {
            printf ("%d\n", i);
        }
        
    }

    return 0;
}