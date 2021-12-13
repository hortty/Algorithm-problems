/*
Problem: 1007 Diferenca

Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).

Entrada
O arquivo de entrada contém 4 valores inteiros.

Saída
Imprima a mensagem DIFERENCA com todas as letras maiúsculas, conforme exemplo abaixo, com um espaço em branco antes e depois da igualdade.
*/
using System; 

class URI {
    static int func(int A, int B, int C, int D) {
int DIFERENCA = (A * B - C * D);
return DIFERENCA;
}
    static void Main(string[] args) { 

    int a = Int32.Parse(Console.ReadLine());
int b = Int32.Parse(Console.ReadLine());
int c = Int32.Parse(Console.ReadLine());
int d = Int32.Parse(Console.ReadLine());

Console.WriteLine("DIFERENCA = "+func(a,b,c,d));
    }

}