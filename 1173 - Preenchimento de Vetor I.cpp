/*
1173 - Preenchimento de Vetor I
*/

#include <iostream>

using namespace std;

int main()
{
    int x,n[10];
    cin >> x;
    for (int i=1;i<10;i++){
        n[0]=x;
        n[i]=n[i-1]*2;
    }
    for (int u=0;u<10;u++) {
        cout << "N[" << u << "] = " << n[u] << endl;
    }
    return 0;
}
