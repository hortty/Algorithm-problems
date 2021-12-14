/*
Problem: 1149 Somando Inteiros Consecutivos
*/

#include <stdio.h>

int main()
{
    int a,b=-1,i, soma=0, j=0;
    
    scanf ("%d", &a);
    
    while (j==0) {
        scanf ("%d", &b);
        if (b>0) {
            j=1;
        }
    }
    
    for (i=1;i<=b;i++) {
        soma+=a;
        a++;
    }
    
    printf ("%d\n", soma);

    return 0;
}