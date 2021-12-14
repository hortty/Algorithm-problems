/*
Problem: 1080 Maior e Posicao
*/

#include <stdio.h>

int main()
{
    int num[100], i, u=0, num2 = 0;
    
    for (i=0;i<100;i++) {
        scanf ("%d", &num[i]);
        
        if (num2 < num[i]) {
            num2 = num[i];
            u = i;
        }
    }
    u = u + 1;
    printf ("%d\n", num2);
    printf ("%d\n", u);

    return 0;
}