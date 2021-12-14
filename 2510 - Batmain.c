/*
Problem: 
2510 - Batmain
*/

#include <stdio.h>

int main() {
    int a=0, i=0;
    char b[10000];
    
    scanf ("%d", &a);
    
    while (i<a) {
        scanf ("%s", b);
        if (b[0]=='B' && b[1] =='a' && b[2] =='t' && b[3]=='m' && b[4]=='a' && b[5]=='n') {
            printf ("N\n");
        }
        else {
            printf ("Y\n");
        }
        
        i++;
    }
    
    
    return 0;
}