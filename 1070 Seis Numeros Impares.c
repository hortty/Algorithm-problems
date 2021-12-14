/*
Problem: 1070 Seis Numeros Impares
*/

#include <stdio.h>

int main()
{
    int a,i;
    scanf ("%d", &a);
    
    if (a%2 != 0) {
           printf ("%d\n", a);
           a = a + 2;
           printf ("%d\n", a);
           a = a + 2;
           printf ("%d\n", a);
           a = a + 2;
           printf ("%d\n", a);
           a = a + 2;
           printf ("%d\n", a);
           a = a + 2;
           printf ("%d\n", a);
           a = a + 2;
           printf ("%d\n", a);
        
        }
    else {
           a = a + 1;
           printf ("%d\n", a);
           a = a + 2;
           printf ("%d\n", a);
           a = a + 2;
           printf ("%d\n", a);
           a = a + 2;
           printf ("%d\n", a);
           a = a + 2;
           printf ("%d\n", a);
           a = a + 2;
           printf ("%d\n", a);
           a = a + 2;
    }
    return 0;
}