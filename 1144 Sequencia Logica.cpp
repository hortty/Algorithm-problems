/*
Problem: 1144 Sequencia Logica
*/

#include <iostream>

using namespace std;

int main()
{
    int c;
    int x[1000];
    cin >> c;
    x[0]=0;
    for (int i=0;i<c;i++) {
            int u=i+1;
            x[i+1]= (x[i]+1);
            x[i+2]= (x[i]+1);
            cout << (x[i]+1) << " " << x[i+1]*u << " " << x[i+2]*u*u << endl;
            cout << (x[i]+1) << " " << (x[i+1]*u)+1 << " " << (x[i+2]*u*u)+1 << endl;
        }


    return 0;
}