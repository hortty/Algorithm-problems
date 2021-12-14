/*
1177 - Preenchimento de Vetor II
*/

#include <iostream>

using namespace std;

int main() {
	
	int vet=0,i=0,x=0,j=0,val=0,v=1000; 
	cin >> x;
	for(i=0;i<(1000/x)+5;i++) {
		vet = -1;
		
		for(j=0;j<x;j++) {
			if (val<1000) {
			vet++;
			cout << "N[" << val << "] = " << vet << endl; 
			val++;
		}
	}
	}
	
	return 0;
}