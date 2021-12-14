/*
1435 - Matriz Quadrada I
*/

#include <iostream>

using namespace std;

int main() {
	
	int m[100][100];
	int a=1, i=0, j=0, b=0, i1=0, j1=0;
	
	while(a!=0) {
		cin >> a;
		if (a!=0) {
			for (i=0;i<a;i++) {
				for (j=0;j<a;j++) {
				m[i][j] = 1;
			}
			}
			
			if(a%2==0) {
				b=a;
				i1=1;
				j1=(a-1);
				
				
				while(b>0) {
				b=b-2;
				
				if (b>0) {
				for (i=i1;i<j1;i++) {
				for (j=i1;j<j1;j++) {
					m[i][j]++;
			}
			}
			i1++;
			j1--;
		}
				}
			}
			
			else{
				b=a;
				i1=1;
				j1=(a-1);
				
				
				while(b>0) {
				b=b-2;
				
				if (b>0) {
				for (i=i1;i<j1;i++) {
				for (j=i1;j<j1;j++) {
					m[i][j]++;
			}
			}
			i1++;
			j1--;
		}
				}
			}
			
			for(i=0; i<a; i++)
            {
                for(j=0; j<a; j++)
                {
                    if(j==0)
                        printf("%3d",m[i][j]);
                    else printf(" %3d",m[i][j]);
                }
                printf("\n");
            }
            printf("\n");
			
		}
	}
	
	return 0;
}