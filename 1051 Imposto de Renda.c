/*
Problem: 1051 Imposto de Renda
*/

#include <stdio.h>

int main()
{
    double a,porcent,p;
    scanf ("%lf", &a);
    if (a<=2000) {
        printf ("Isento");
    }
    else {
        a = a - 2000;
        if (a<=1000) {
            porcent = (a*8)/100;
            printf ("R$ %.2f", porcent);
        }
        else {
            if (a<=2500) {
                porcent = (1000*8)/100;
                a = a - 1000;
                porcent = porcent + ((a*18)/100);
                printf ("R$ %.2f", porcent);
            }
            else {
                if (a>2500) {
                porcent = (1000*8)/100;
                a = a - 1000;
                p = ((1500*18)/100);
                a = a - 1500;
                porcent = p + porcent + ((a*28)/100);
                printf ("R$ %.2f", porcent);    
                }
            }
        }
    }
    
    printf ("\n");

    return 0;
}