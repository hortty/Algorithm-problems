/*
Problem: 
1158 - Soma de Impares Consecutivos III
*/

#include <stdio.h>

int main()
{
    int a=0,b=0,i=0,j=0,w=0,soma=0;
    
    scanf ("%d", &j);
    
    for (w=0;w<j;w++) {
        scanf ("%d %d", &a, &b);
        
        while (i<b) {
            
            if (a%2!=0) {
                i++;
                soma+=a;
            }
            
            a++;
            
        }
        printf ("%d\n", soma);
        soma=0;
        i=0;
    }

    return 0;
}