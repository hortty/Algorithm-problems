/*
Problem: 1827 - Matriz Quadrada IV
*/
#include <iostream>

using namespace std;

int main()
{
    int c;
    while(cin >> c)
    {
    int x = c-1;
    int y = c/3;
    int m[c][c], aux1=0, aux2=x;
    for(int i=0;i<c;i++) {
        for(int j=0;j<c;j++) {
            m[i][j] = 0;
        }
    }
    for(int i=0;i<c;i++) {
        for(int j=0;j<c;j++) {
            if(i==j){
                m[i][j] = 2;
                if(i==aux1 && j==aux2) {
                aux1++;
                aux2--;
                m[i][j] = 4;
            }
            }
            if(i==aux1 && j==aux2) {
                aux1++;
                aux2--;
                m[i][j] = 3;
            }
            if( (i>=y && i<=(x-y) && (j>=y && j<=(x-y))) ) {
                if(i==((c-1)/2) && j==((c-1)/2)) {
                    m[i][j] = 4;
                }
                else {
                    m[i][j] = 1;
                }
            }
            
            cout << m[i][j];
    }
    cout<< endl;
    }
      
    cout << endl;
    }
    return 0;
}
