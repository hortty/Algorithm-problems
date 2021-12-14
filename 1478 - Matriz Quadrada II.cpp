/*
1478 - Matriz Quadrada II
*/

#include <iostream>

using namespace std;

int main() {
	
	int m[500][500], i=0, j=0, a=0, b=0, c=0, d=0, e=0, loop=1;
	
	while(loop!=0) {
		cin >> loop;
		if (loop!=0) {
			b=0;
		for(i=0;i<loop;i++) {
				m[i][i]=1;
				m[0][i]=i+1;
			}
		for(j=0;j<loop;j++) {
			i=1;
			while(i<j) {
				m[i][j] = (m[i-1][j])-1;
				i++;
			}	
		}
		for(j=0;j<loop;j++) {
			b++;
			i=b;
			while(i<loop) {
				m[i][j] = m[i-1][j]+1;
			i++;
			}
		}	
			for(i=0; i<loop; i++)
            {
                for(j=0; j<loop; j++)
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