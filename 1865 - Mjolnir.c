/*
Problem: 
1865 - Mjolnir
*/

#include <stdio.h>

int main()
{
    char c[1000];
    int a=0, b=0;
    
    scanf ("%d", &a);
    int i=0;
    while (i<a) {
        i++;
        scanf ("%s", c);
        scanf ("%d", &b);
        if (c[0]== 'T' && c[1]== 'h' && c[2]=='o' && c[3]=='r') {
            printf ("Y\n");
        }
        else {
            printf ("N\n");
        }
    }
    

    return 0;
}