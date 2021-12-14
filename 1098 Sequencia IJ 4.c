/*
Problem: 1098 Sequencia IJ 4
*/

#include <stdio.h>

int main()
{
    float a=0,b=0,i=0;
    int j;
    
    for (i;i<=2;i=i+0.2) {
        b=0+i;
        if (i==0) {
            for (j=0;j<3;j++) {
            a = i;
            b = b+1;
            printf ("I=%.0f J=%.0f\n", a,b);
        }    
        }
        else if (i==1) {
            for (j=0;j<3;j++) {
            a = i;
            b = b+1;
            printf ("I=%.0f J=%.0f\n", a,b);
        } 
        }
        else {
            for (j=0;j<3;j++) {
            a = i;
            b = b+1;
            printf ("I=%.1f J=%.1f\n", a,b);
        }
    } 
    }
    b=2;
    for (j=0;j<3;j++) {
            a = i;
            b = b+1;
            printf ("I=%.0f J=%.0f\n", a,b);
        } 

    return 0;
}