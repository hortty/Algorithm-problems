/*
Problem: 1013 Maior

Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula:

MAIORab = (a+b+abs(a-b))/2

Obs.: a fórmula apenas calcula o maior entre os dois primeiros (a e b). Um segundo passo, portanto é necessário para chegar no resultado esperado.

Entrada
O arquivo de entrada contém três valores inteiros.

Saída
Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior".
*/

import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
    int a=0,b=0, c=0, maior1=0, maior2=0;
    Scanner scan = new Scanner(System.in);
    a = scan.nextInt();
    b = scan.nextInt();
    c = scan.nextInt();
    a = Math.abs(a);
    b = Math.abs(b);
    c = Math.abs(c);
    maior1 = Math.max(a,b);
    maior2 = Math.max(maior1,c);
    System.out.print(maior2+" eh o maior\n");
 
    }
 
}