/*
1178 - Preenchimento de Vetor III
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	long double a[1000];
	long long int i=0,x=0,j=0;
	
	cin >> x;
	a[0] = x;
	for(i=0;i<100;i++) {
	if(i>0) {
	a[i] = a[i-1];
}
	cout << fixed << setprecision(4);
	cout << "N[" << i << "] = " << a[i] << endl;
	a[i] = (a[i]/2);
}

	return 0;
}