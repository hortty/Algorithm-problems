/*
Problem: 
2057 - Fuso Horario
*/

#include <stdio.h>

    int main(){

    int h,t,f,soma,g;

    scanf ("%d %d %d", &h, &t, &f);
    if ((h<=23) && (h>=0) && (t<=12) && (t>=1) && (f<=5) && (f>=-5)) {
            soma=h+t+f;


            if (soma>=0){while (soma>=24){
                soma=soma-24;

            }}
            if (soma<0)
            {
                soma=soma+24;
            }
            printf ("%d\n", soma);


            return 0;

    }
    }