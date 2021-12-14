/*
Problem: 1131 Grenais
*/

#include <stdio.h>

int main()
{
    int i=0, m=1, n=0;
    int a=0, b=0, inter=0, grem=0, empt=0, result=0;
    
    do {
        scanf ("%d", &a);
        scanf ("%d", &b);
        
        if (a>b) {
            inter++;
        }
        else if (b>a) {
            grem++;
        }
        else {
            empt++;
        }
        
        do {
        printf ("Novo grenal (1-sim 2-nao)\n");
        scanf ("%d", &m);
        n = m;
        }while (n<1 && n>2);
        
        
    }while (m == 1);
    
    result = (grem+empt+inter);
    printf ("%d grenais\n", result);
    printf ("Inter:%d\n", inter);
    printf ("Gremio:%d\n", grem);
    printf ("Empates:%d\n", empt);
    
    if (inter>grem) {
        printf ("Inter venceu mais\n");
    }
    else if (grem>inter) {
        printf ("Gremio venceu mais\n");
    }
    else {
        printf ("Nao houve vencedor\n");
    }

    return 0;
}