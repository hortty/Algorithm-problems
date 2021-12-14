/*
Problem: 
1866 - Conta
*/

#include <stdio.h>

int main() {
	
	int a=0, b[1000], i=0;
	
	scanf("%d", &a);
	while (i<a) {
		scanf("%d", &b[i]);
		if (b[i]%2 == 0) {
			printf ("0\n");
		}
		else {
			printf ("1\n");
		}
		i++;
	}
	
	return 0;
}