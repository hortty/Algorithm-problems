/*
Problem: 1050 DDD
*/

#include <stdio.h>

int main() {
	
	int D;
	
	scanf ("%d", &D);
	
	if (D==61) {
		printf ("Brasilia");
	}
	else if (D==71) {
		printf ("Salvador");
	}
	else if (D==11) {
		printf ("Sao Paulo");
	}
	else if (D==21) {
		printf ("Rio de Janeiro");
	}
	else if (D==32) {
		printf ("Juiz de Fora");
	}
	else if (D==19) {
		printf ("Campinas");
	}
	else if (D==27) {
		printf ("Vitoria");
	}
	else if (D==31) {
		printf ("Belo Horizonte");
	}
	else {
		printf ("DDD nao cadastrado");
	}
	
	printf ("\n");
	return 0;
}