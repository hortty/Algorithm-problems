/*
Problem: 
1759 - Ho Ho Ho
*/

#include <stdio.h>

int main()
{
    int a=0, i=0, j=0;
    char h[4] = "Ho ";
    
    scanf ("%d", &a);
    
    a=a-1;
    for (i;i<a;i++) {
        for (j=0;j<3;j++) {
        printf ("%c", h[j]);
        }
    }
    
    printf ("Ho!\n");

    return 0;
}