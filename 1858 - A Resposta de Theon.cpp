/*
1858 - A Resposta de Theon
*/

#include <iostream>

using namespace std;

int main() {
	
	int N=0,T[1000],i=0,comparador=0,e=1;
	cin >> N;
	for(i=0;i<N;i++) {
		cin >> T[i];
	}
	comparador=T[0];
	
	for(i=0;i<N;i++) {
		if (T[i]<comparador) {
			comparador=T[i];
			e = i+1;
		}
	}
	cout << e << endl;
	
	return 0;
}