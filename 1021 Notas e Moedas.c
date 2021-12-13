/*
Problem: 1021 Notas e Moedas
*/

#include <stdio.h>

int main()
{
    float x=0;
    int n1=0, n2=0, n3=0, n4=0, n5=0, n6=0, n7=0 , n8=0, n9=0, n10=0, n11=0, n12=0;
    
    scanf ("%f", &x);
    
    while (x>=100) {
        x = x - 100;
        n1++;
    }
    while (x>=50) {
        x = x - 50;
        n2++;
    }
    while (x>=20) {
        x = x - 20;
        n3++;
    }
    while (x>=10) {
        x = x - 10;
        n4++;
    }
    while (x>=5) {
        x = x - 5;
        n5++;
    }
    while (x>=2) {
        x = x - 2;
        n6++;
    }
    while (x>=1) {
        x = x - 1;
        n7++;
    }
    while (x>=0.5) {
        x = x - 0.5;
        n8++;
    }
    while (x>=0.25) {
        x = x - 0.25;
        n9++;
    }
    while (x>=0.10) {
        x = x - 0.10;
        n10++;
    }
    while (x>=0.05) {
        x = x - 0.05;
        n11++;
    }
    while (x>=0.01) {
        x = x - 0.01;
        n12++;
    }
    if (x > 0.005) {
        x = x - 0.01;
        n12++;
    }
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n1);
    printf("%d nota(s) de R$ 50.00\n", n2);
    printf("%d nota(s) de R$ 20.00\n", n3);
    printf("%d nota(s) de R$ 10.00\n", n4);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n6);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", n7);
    printf("%d moeda(s) de R$ 0.50\n", n8);
    printf("%d moeda(s) de R$ 0.25\n", n9);
    printf("%d moeda(s) de R$ 0.10\n", n10);
    printf("%d moeda(s) de R$ 0.05\n", n11);
    printf("%d moeda(s) de R$ 0.01\n", n12);
    return 0;
}