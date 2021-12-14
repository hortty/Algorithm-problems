/*
Problem: 1046 Tempo de Jogo
*/
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int hi, hf, total;
        hi = scan.nextInt();
        hf = scan.nextInt();
        
        if (hi==hf) {
            total=24;
        }
        else if (hi>hf) {
            total=24-hi;
            total = total+hf;
        }
        else {
            total= hf - hi;
        }
        System.out.printf("O JOGO DUROU %d HORA(S)%n", total);
        
    } 
}