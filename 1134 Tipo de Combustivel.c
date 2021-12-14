/*
Problem: 1134 Tipo de Combustivel
*/

#include <stdio.h>

int main()
{
    int i=0, alc=0, gas=0, die=0;
    
    while (i!=4) {
        scanf ("%d", &i);
        if (i==1) {
            alc++;
        }
        if (i==2) {
            gas++;
        }
        if (i==3) {
            die++;
        }
    }
    printf ("MUITO OBRIGADO\n");
    printf ("Alcool: %d\n", alc);
    printf ("Gasolina: %d\n", gas);
    printf ("Diesel: %d\n", die);
    
    return 0;
}