/*
Problem: 1044 Multiplos
*/

#include <stdio.h>

int main() {
	
	int a,b;
	
	scanf ("%d %d", &a, &b);
	
	if ((a%b==0 || b%a==0)) {
		printf ("Sao Multiplos");
	}
	
	else {
		printf ("Nao sao Multiplos");
	}
	printf ("\n");
	return 0;


}