/*
1186 - Abaixo da Diagonal Secundaria
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double m[12][12], soma=0, media=0;
	int i=0, j=0, w=11,cont=0;
	char a;
	
	cin >> a;
	
	if (a == 'S') {
		for (i=0; i<12; i++) {
			for (j=0;j<12;j++) {
			cin >> m[i][j];
			}
		}
		
		for (i=1; i<12; i++) {
			for (j=11;j>=w;j--) {
				soma += m[i][j];
			}
			w--;
		}		
		cout << fixed << setprecision(1);
		cout << soma << endl;
	}
	
	if (a == 'M') {
		for (i=0; i<12; i++) {
			for (j=0;j<12;j++) {
			cin >> m[i][j];
			}
		}
		
		for (i=1; i<12; i++) {
			for (j=11;j>=w;j--) {
				soma += m[i][j];
				cont++;
			}
			w--;
		}		
		soma = soma/cont;
		cout << fixed << setprecision(1);
		cout << soma << endl;
	}
	
	
	
	return 0;
}