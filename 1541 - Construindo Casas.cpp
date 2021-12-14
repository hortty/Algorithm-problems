/*
1541 - Construindo Casas
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double total, totalv;
    double a,b,c;
    bool w = true;
    while(w) {
    cin >> a;
    if (a == 0) {
        w = false;
    }
    else {
        cin >> b >> c;
        c=c/100;
        total = sqrt((a*b)/c);
        totalv = floor (total);
        cout << totalv << endl;     
    }
    }
    
    return 0;
}