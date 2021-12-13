/*
Problem: 1010 Cálculo Simples using C#

Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.

Entrada
O arquivo de entrada contém duas linhas de dados. Em cada linha haverá 3 valores, respectivamente dois inteiros e um valor com 2 casas decimais.

Saída
A saída deverá ser uma mensagem conforme o exemplo fornecido abaixo, lembrando de deixar um espaço após os dois pontos e um espaço após o "R$". O valor deverá ser apresentado com 2 casas após o ponto.
*/
using System; 

class URI {

    static double func(int a, double b, int c, double d) {
    double valor = (a*b)+(c*d);
    return valor;
}

    static void Main(string[] args) { 

    string[] vet1 = new string[3];
    string[] vet2 = new string[3];
    vet1 = Console.ReadLine().Split(' ');
    vet2 = Console.ReadLine().Split(' ');
    int a = Int32.Parse(vet1[1]);
    double b = Double.Parse(vet1[2]);

    int c = Int32.Parse(vet2[1]);
    double d = Double.Parse(vet2[2]);

    Console.WriteLine("VALOR A PAGAR: R$ "+func(a,b,c,d).ToString("0.00"));

    }

}