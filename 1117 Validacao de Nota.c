/*
Problem: 1117 Validacao de Nota
*/

#include <stdio.h>

int main()
{
    int i=0,u=0;
    float a=0, media=0;
    
    while (i<2) {
        scanf ("%f", &a);
        if (a<=0 || a>10) {
            printf ("nota invalida\n");
        }
        else {
            media += a;
            i++;
        }
    }
    media = media / 2;
    printf ("media = %.2f\n", media);

    return 0;
}