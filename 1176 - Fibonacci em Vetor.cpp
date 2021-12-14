/*
1176 - Fibonacci em Vetor
*/

#include <iostream>

using namespace std;

int main() {
	
	int num=0,i=0,j=0,x=0;
	unsigned long long int y=0,vet[10000];
	cin >> num;
	for(i=0;i<num;i++) {
		cin >> x;
		if(x>1 && x!=2) {
		vet[1] = 1;
		vet[2] = 1;
		for(j=3;j<=x;j++) {
			vet[j] = (vet[j-1]+vet[j-2]);
			y=vet[j];
		}
		cout << "Fib(" << x << ") = " << y << endl;
		}
		else if(x==2) {
		cout << "Fib(" << x << ") = " << 1 << endl;	
		}
		else {
			cout << "Fib(" << x << ") = " << x << endl;
		}
	}
	
	return 0;
}