/*
Problem: 1041 Coordenadas de um Ponto
*/

#include <stdio.h>

int main() {
	
	float x,y;
	scanf ("%f %f", &x, &y);
	if ((x>0) && (y>0)) {
		printf ("Q1");
	}
	if ((x<0) && (y>0)) {
		printf ("Q2");
	}
	if ((x<0) && (y<0)) {
		printf ("Q3");
	}
	if ((x>0) && (y<0)) {
		printf ("Q4");
	}
	if ((x==0) && (y==0)) {
		printf ("Origem");
	}
	if ((x==0) && (y!=0)) {
		printf ("Eixo Y");
	}
	if ((x!=0) && (y==0)) {
		printf ("Eixo X");
	}
	printf ("\n");
	return 0;	
}
	