/*
Problem: 1040 Media 3
*/

#include <stdio.h>

int main()  {
	
	float a,b,c,d,media;
	scanf ("%f %f %f %f", &a, &b, &c, &d);
	a=a*2;
	b=b*3;
	c=c*4;
	d=d*1;
	
	media=(a+b+c+d)/10;
	
	if (media>=7.0) {
		printf ("Media: %.1f", media);
		printf ("\nAluno aprovado.");
	}
	else if (media<5) {
		printf ("Media: %.1f", media);
		printf ("\nAluno reprovado.");
	}
	else {
		printf ("Media: %.1f", media);
		printf ("\nAluno em exame.");
		float exame;
		printf ("\n");
		scanf ("\n%f", &exame);
		printf ("Nota do exame: %.1f", exame);
		media=(exame+media)/2;
		if (media >=5.0) {
			printf ("\nAluno aprovado.");
		}
		else if (media<5) {
			printf ("\nAluno reprovado.");
		}
		printf ("\nMedia final: %.1f", media); 
}
	printf ("\n");
		return 0;
	
	}
	