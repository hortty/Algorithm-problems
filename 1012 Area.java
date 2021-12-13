/*
Problem: 1012 Area

Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.
Entrada
O arquivo de entrada contém três valores com um dígito após o ponto decimal.

Saída
O arquivo de saída deverá conter 5 linhas de dados. Cada linha corresponde a uma das áreas descritas acima, sempre com mensagem correspondente e um espaço entre os dois pontos e o valor. O valor calculado deve ser apresentado com 3 dígitos após o ponto decimal.
*/
import java.io.IOException;
import java.text.DecimalFormat;
import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner scan = new Scanner(System.in);
	    DecimalFormat deci = new DecimalFormat("0.000");
	    double a = scan.nextDouble();
		double b = scan.nextDouble();
		double c = scan.nextDouble();
		System.out.println("TRIANGULO: "+deci.format((a*c)/2));
		System.out.println("CIRCULO: "+deci.format(3.14159*Math.pow(c,2)));
		System.out.println("TRAPEZIO: "+deci.format(((a+b)*c)/2));
		System.out.println("QUADRADO: "+deci.format(b*b));
		System.out.println("RETANGULO: "+deci.format(a*b));
       
    }
 
}