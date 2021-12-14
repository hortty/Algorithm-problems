/*
Problem: 1065 Pares entre Cinco Numeros
*/

#include <stdio.h>

int main()
{
    int num[5];
    int a=0,i=0;
    
    for (i;i<5;i++) {
        scanf ("%d", &num[i]);
        if (num[i]%2 == 0) {
            a++;
        }
    }
    printf ("%d valores pares\n", a);
    
    

    return 0;
}