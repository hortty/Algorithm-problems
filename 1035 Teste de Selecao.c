/*
Problem: 1035 Teste de Selecao
*/

#include <stdio.h>

		int main()
		{
			int A,B,C,D;
			scanf ("%d %d %d %d", &A, &B, &C, &D);
			
			if ((B>C) && (D>A) && (D>0) && (C>0) && (A%2 == 0) && (C+D>A+B)){
			
			
				printf ("Valores aceitos");
				
			}
			else 
			{
				printf ("Valores nao aceitos");
			}
			
			printf ("\n");
			return 0;
		}