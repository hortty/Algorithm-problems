/*
2334 - Patinhos
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	unsigned long long int i=0,x=0,pat=0,j=0;
	
	while(i!=-1) {
		cin >> i;
		if(i==-1) {
			break;
		}
		else if(i>0) {
			cout << (i-1) << endl;
		}
		else if(i==0) {
			cout << i << endl;
		}
	}

	return 0;
}