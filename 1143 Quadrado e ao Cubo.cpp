/*
Problem: 1143 Quadrado e ao Cubo
*/

#include <iostream>
 
using namespace std;
 
int main() {
 
    int a=0;
    cin >> a;
    int valor=1;
    for(int i=0;i<a;i++) {
        cout << valor << " " << valor*valor << " " << valor*valor*valor << endl;
        valor++;
    }
 
    return 0;
}