/*
1165 - Numero Primo
*/

#include <iostream>

using namespace std;

int main() {
	
	int num=0,x=0,i=0,j=0,val=0;
	cin>>num;
	for (i=0;i<num;i++) {
		cin >> x;
		val = 0;
		for(j=1;j<100;j++) {
			if(x%j==0 && x!=j) {
				val++;
			} 
		}
		if(val == 1) {
			cout<< x << " eh primo" << endl;
		}
		else {
			cout<< x << " nao eh primo" << endl;
		}
	}
	
	return 0;
}
