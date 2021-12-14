/*
Problem: 1113 Crescente e Decrescente
*/

#include<stdio.h>

int a=0,b=0;

int main()
{
    do {
        scanf ("%d", &a);
        scanf ("%d", &b);
        
        if (b>a) {
            printf ("Crescente\n");
        }
        else if (a>b) {
            printf ("Decrescente\n");
        }
    }
    while (a!=b);

return 0;

}