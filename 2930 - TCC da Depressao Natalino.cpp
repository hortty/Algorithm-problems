/*
2930 - TCC da Depressao Natalino
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	int d=0, f=0, sub=0;
	
	cin >> d >> f;
	sub = f-d;
	if (sub>=3) {
		cout << "Muito bem! Apresenta antes do Natal!" << endl;
	}
	else if (sub <= 2 && sub >= 0) {
		cout << "Parece o trabalho do meu filho!" << endl;
		d = d+2;
		if (d<24) {
			cout << "TCC Apresentado!" << endl;
		}
		else {
			cout << "Fail! Entao eh nataaaaal!" << endl;
		}
	}
	else if (d<0 || f<0 || sub<0) {
		cout << "Eu odeio a professora!" << endl;
	}
	else {
		cout << "Eu odeio a professora!" << endl;
	}
	
	
	return 0;
}