/*
Problem: 
1190 - Area Direita
*/

#include <stdio.h>

int main()
{
   float m[12][12], media=0, soma=0;
   int i=0,j=0, o=0, lim=11;
   char q;
   
   scanf ("%c", &q);
   
   for (i=0;i<12;i++) {
       for (j=0;j<12;j++) {
           scanf ("%f", &m[i][j]);
       }
   }
   
   if (q == 'S') {
       
    for (i=1;i<6;i++) {
       for (j=11;j>=lim;j--) {
           soma += m[i][j];
       }
       lim--;
   }
   
    lim++;
    
   for (i=6;i<11;i++) {
       for (j=11;j>=lim;j--) {
           soma += m[i][j];
       }
       lim++;
   }
   
        printf ("%.1f\n", soma);
   }
   
   if (q == 'M') {
       
    for (i=1;i<6;i++) {
       for (j=11;j>=lim;j--) {
           soma += m[i][j];
           o++;
       }
       lim--;
   }
   
    lim++;
    
   for (i=6;i<11;i++) {
       for (j=11;j>=lim;j--) {
           soma += m[i][j];
           o++;
       }
       lim++;
   }
   
   media = soma/o;
   printf ("\n%.1f\n", media);
       
   }
   
    return 0;
}