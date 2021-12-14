/*
Problem: 1118 Varias Notas com Validacao
*/

#include <stdio.h>

int main()
{
    int i=0,u=0, m=1, n=0;
    float a=0, media=0;
    
    do {
        scanf ("%f", &a);
        if (a<=0 || a>10) {
            printf ("nota invalida\n");
        }
        else {
            media += a;
            i++;
            if (i == 2) {
                media = media / 2;
                printf ("media = %.2f\n", media);
                i = 0;
                do {
                printf ("novo calculo (1-sim 2-nao)\n");
                scanf ("%d", &n); 
                if (n == 1 || n == 2) {
                    u = 1;
                    }
                }while (u == 0);
                m = n;
                media = 0 ;
            }
        }
        u=0;
    }while (m == 1);

    return 0;
}