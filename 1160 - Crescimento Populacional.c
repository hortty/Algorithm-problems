/*
Problem: 
1160 - Crescimento Populacional
*/

#include <stdio.h>

int main()
{
    int i=0, j=0, a=0, bandeira=0;
    int pa = 0, pb = 0;
    float g1 = 0, g2 = 0;
    
    scanf ("%d", &a);
    
    for (i=0;i<a;i++)
{  
        bandeira = 0;
        scanf ("%d", &pa);
        scanf ("%d", &pb);
        scanf ("%f", &g1);
        scanf ("%f", &g2);
        
        j=0;
        
        while (pa <= pb) {
            pa = pa + (pa * g1)/100;
            pb = pb + (pb * g2)/100;
            j++;
            if (j>100) {
                pa = pb + 1;
                printf ("Mais de 1 seculo.\n");
                bandeira = 1;
            }
        }
        
        if (bandeira != 1) {
        printf ("%d anos.\n", j);
        }
        
}

    return 0;
}