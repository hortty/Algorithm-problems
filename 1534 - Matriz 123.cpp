/*
1534 - Matriz 123
*/

#include <iostream>

using namespace std;

int main() {
	int m[100][100];
	int a=0,i=0,j=0;
	
	while (cin>>a) {
		for(i=0;i<a;i++) {
			for(j=0;j<a;j++) {
			m[i][j] = 3;
		}
		}
		
		i=0, j=0;
		
		while(i<a) {
			m[i][j] = 1;
			i++;
			j++;
		}
		
		i=-1, j=a;
		
		while(j>-1) {
			m[i][j] = 2;
			i++;
			j--;
		}
		
		for(i=0;i<a;i++) {
			for(j=0;j<a;j++) {
			cout << m[i][j];
		}
		cout << endl;
		}
	}
	
	return 0;
}