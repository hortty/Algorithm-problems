/*
1175 - Troca em Vetor I
*/

#include <iostream>

using namespace std;

int main()
{
    int vet[20];
    int aux=19;
    for(int i=0;i<20;i++) {
        cin >> vet[i];
    }
    for(int i=19;i>=0;i--) {
        cout << "N[" << (aux-i) << "] = " << vet[i] << endl;
    }

    return 0;
}
