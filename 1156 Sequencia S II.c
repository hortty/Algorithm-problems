/*
Problem: 1156 Sequencia S II
*/

#include <stdio.h>

int main()
{
    float s=1, result=0;
    float a=3,b=2;
    int i=0;
    
    result = a/b;
    s += result;
    
    while (i<18) {
        a = a + 2;
        b = b * 2;
        result = a/b;
        s += result;
        i++;
    }
    
    printf ("%.2f\n", s);

    return 0;
}