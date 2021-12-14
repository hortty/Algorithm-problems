/*
Problem: 1045 Tipos de Triangulos
*/

#include <stdio.h>

int main() {
	
	float x,a,b,c;
	
	scanf ("%f %f %f", &a, &b, &c);
	
	if (c>b) {
		x=c;
		c=b;
		b=x;
	}
	
	if (b>a) {
		x=b;
		b=a;
		a=x;
	} 
	if (c>a) {
		x=c;
		c=a;
		a=x;
	}
	
	
	if (a >= b+c) {
		printf ("NAO FORMA TRIANGULO\n");
	}
	
	else if (a*a == b*b + c*c) {
		printf ("TRIANGULO RETANGULO\n");
	}
	else if (a*a > b*b + c*c) {
		printf ("TRIANGULO OBTUSANGULO\n");
	}
	else if (a*a < b*b + c*c) {
		printf ("TRIANGULO ACUTANGULO\n");
	}
	if (a==b && b==c) {
		printf ("TRIANGULO EQUILATERO\n");
	}
	else if (a==b || b==c) {
		printf ("TRIANGULO ISOSCELES\n");
	}

	return 0;
}