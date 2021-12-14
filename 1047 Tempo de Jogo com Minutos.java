/*
Problem: 1047 Tempo de Jogo com Minutos
*/
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int hi=0, hf=0, mi=0 , mf=0,total=0, total2=0;
        hi = scan.nextInt();
        mi = scan.nextInt();
        hf = scan.nextInt();
        mf = scan.nextInt();
        
        total=hf-hi;
        if (total<0) {
            if(mf>mi) {
                total2=mf-mi;
                total=24-(hi-hf);
            }
            else if(mi>mf) {
                total2=60-(mi-mf);
                total=24-(hi-hf);
                total--;
            }
            else {
                total=24-(hi-hf);
            }
        }
        
        else if (total>0) {
            if(mf>mi) {
                total2=mf-mi;
                total=hf-hi;
            }
            else if(mi>mf) {
                total2=60-(mi-mf);
                total=hf-hi;
                total--;
            }
            else {
                total=hf-hi;
            }
        }
        else {
            if(mf>mi) {
                total2=mf-mi;
            }
            else if(mi>mf) {
                total2=60-(mi-mf);
                total=23;
            }
            else {
                total2=60-(mi-mf);
                total=24-(hi-hf);
                total--;
            }
        }
        
        if (hi==hf && mi==mf) {
            total=24;
            total2=0;
        }
        System.out.printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)%n", total,total2);
    }  
}