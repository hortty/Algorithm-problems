/*
Problem: 
1185 - Acima da Diagonal Secundaria
*/

#include <stdio.h>

int main()
{
   float m[12][12], media=0, soma=0;
   int i=0,j=0, lim=11, o=0;
   char q;
   
   scanf ("%c", &q);
   
   for (i=0;i<12;i++) {
       for (j=0;j<12;j++) {
           scanf ("%f", &m[i][j]);
       }
   }
   
   if (q == 'S') {
       
    for (i=0;i<11;i++) {
       for (j=0;j<lim;j++) {
           soma += m[i][j];
       }
       lim--;
   }
   
        printf ("%.1f\n", soma);
   }
   
   if (q == 'M') {
       
    for (i=0;i<11;i++) {
       for (j=0;j<lim;j++) {
           soma += m[i][j];
           o++;
       }
       lim--;
   }
   
   media = soma/o;
   printf ("%.1f\n", media);
       
   }
   
    return 0;
}