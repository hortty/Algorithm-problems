/*
Problem: 1075 Resto 2
*/

#include <stdio.h>
int main()
{
    int N,a;
    scanf("%d",&N);
    for(a=2;a<=10000;a=a+N)
        printf ("%d\n",a);
    return 0;
}