/*
Problem: 1101 Sequencia de Numeros e Soma
*/

#include <stdio.h>

int main()
{
    int a,b,c,d,i=0,j=0,sum;
    while (j == 0) {
            sum=0;
            scanf ("%d %d", &a, &b);
        i++;
        if (a <= 0 || b <= 0) {
            j=1;
        }
        else if (a>0 && b>0) {
            if (a<b) {
                for (a;a<=b;a++) {
                    printf ("%d ", a);
                    sum = sum + a;
                }
                printf ("Sum=%d\n", sum);
            }
            else if (b<a) {
                for (b;b<=a;b++) {
                    printf ("%d ", b);
                    sum = sum + b;
                }
                printf ("Sum=%d\n", sum);
            }
            
        }
    }




    return 0;
}