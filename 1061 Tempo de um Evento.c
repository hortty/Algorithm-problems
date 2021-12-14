/*
Problem: 1061 Tempo de um Evento
*/

#include <stdio.h>

int main()
{
    int dia1,hora1[3],dia2,hora2[3];
    char a[3], b[3], c[10], d[10];
    int dia, hora, minuto, segundo;
    int i=0, w=0;
    int m=0;
    int h=0, s=0;
    
    scanf ("Dia %d", &dia1);

    scanf ("%d : %d : %d\n", &hora1[0], &hora1[1], &hora1[2]);
    
    scanf ("Dia %d", &dia2);

    scanf ("%d : %d : %d", &hora2[0], &hora2[1], &hora2[2]);
    
    if (hora1[2]<=hora2[2]){
        segundo = hora2[2] - hora1[2];
    }
    else {
        segundo = hora1[2] - hora2[2];
        segundo = 60 - segundo;
        s=1;
    }
    
            if (hora1[1]<=hora2[1] && s != 1){
                 minuto = hora2[1] - hora1[1];
            }
            else {
                minuto = hora1[1] - hora2[1];
                minuto = (60 - minuto) - s;
                m=1;
            }
                
                    if (hora1[0]<=hora2[0] && m !=1){
                    hora = hora2[0] - hora1[0];
                }
                    else {
                    hora = hora1[0] - hora2[0];
                    hora = (24 - hora) - m;
                    h=1;
                }
    
    dia = (dia2 - dia1) - h;
    
    printf ("%d dia(s)", dia);
    printf ("\n%d hora(s)", hora);
    printf ("\n%d minuto(s)", minuto);
    printf ("\n%d segundo(s)", segundo);
    
    printf ("\n");
    
    return 0;
}