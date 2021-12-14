/*
Problem: 
2061 - As Abas de Pericles
*/

#include <stdio.h>

int main() {
	
	int N=0,M=0,n=0,i=0;
	char acao[10];
	
	scanf ("%d %d", &N, &M);
	
		n=N;
		
	for (i; i<M; i++) {
		scanf ("%s", acao);
		
		
		if (acao[0]=='f') {
			n++;
		}
		else if (acao[0]=='c') {
			n--;
		}
		
	
	}
	 
	 printf ("%d\n", n);
	
	return 0;
	
}