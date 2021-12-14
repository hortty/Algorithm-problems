/*
Problem: 1155 Sequencia S
*/

#include <stdio.h>

int main()
{
    float i=1,j=0,a=2;
    float s=1;
    
    while (a<=100) {
        s = s + (i/a);
        a++;
    }
    printf ("%.2f\n", s);

    return 0;
}