/*
Problem: 
2060 - Desafio de Bino
*/

#include <stdio.h>

int main() {
	
	int x=0, array[1000];
	int l=0,m=0,n=0,o=0,i=0,k=0;
	
	scanf ("%d", &x);
	
	for (i;i<x;i++) {
		
		scanf ("\n%d", &array[i]);
			
		}
		
		for (k;k<x;k++) {
		
		
		if  (array[k]%2==0) {
			l++;
		}
		if (array[k]%3==0) {
			m++;
		}
		if (array[k]%4==0) {
			n++;
		}
		if (array[k]%5==0) {
			o++;
		}
		
		
		
		}
		
		printf ("%d Multiplo(s) de 2\n", l);
		printf ("%d Multiplo(s) de 3\n", m);
		printf ("%d Multiplo(s) de 4\n", n);
		printf ("%d Multiplo(s) de 5\n", o);
	
	
		
		return 0;	
}