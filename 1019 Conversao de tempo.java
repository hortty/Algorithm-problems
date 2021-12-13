/*
Problem: 1019 Conversao de tempo
*/
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int total=0, hora=0,min=0,seg=0;
        total = scan.nextInt();
       
        hora = total/3600;
        total=total%3600;
        min = total/60;
        total = total%60;
        seg = total;
        
        System.out.printf("%d:%d:%d%n", hora,min,seg);
    }
}