/*
Problem: 1017 Gasto de Combustivel
*/

#include <stdio.h>

int main() {

    float result,a,b;

    scanf ("%f %f", &a, &b);

    result = (a*b)/12;

    printf ("%.3f\n", result);

    return 0;

}