/*
Problem: 1132 Multiplos de 13
*/

#include <stdio.h>

int main()
{
    int a=0,b=0, soma=0;
    
    
    scanf ("%d", &a);
    scanf ("%d", &b);
    
    if (a>b) {
        while (a>=b) {
            if (b%13 == 0) {
                
            }
            else {
                soma += b;
            }
            b++;
        }
    }
    else {
        while (b>=a) {
            if (a%13 == 0) {
                
            }
            else {
                soma += a;
            }
            a++;
        }
    }
    
    printf ("%d\n", soma);

    return 0;
}
