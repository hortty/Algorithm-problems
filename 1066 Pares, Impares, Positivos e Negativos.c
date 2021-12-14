/*
Problem: 1066 Pares, Impares, Positivos e Negativos
*/

#include <stdio.h>

int main()
{
    int num[5];
    int a=0,i=0;
    int b=0,c=0,d=0;
    
    for (i;i<5;i++) {
        scanf ("%d", &num[i]);
        if (num[i]%2 == 0) {
            a++;
        }
        else {
            b++;
        }
            if (num[i]>0 && num[i]!= 0) {
                c++;
            }
            else if (num[i]<0 && num[i]!=0) {
                d++;
            }
    }
    
    printf ("%d valor(es) par(es)\n", a);
    printf ("%d valor(es) impar(es)\n", b);
    printf ("%d valor(es) positivo(s)\n", c);
    printf ("%d valor(es) negativo(s)\n", d);
    
    

    return 0;
}