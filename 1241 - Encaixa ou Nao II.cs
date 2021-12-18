/*
Problem: 1241 - Encaixa ou Não II   (C# Solution)

Paulinho tem em suas mãos um novo problema. Agora a sua professora lhe pediu que construísse um programa para verificar, à partir de dois valores muito grandes A e B, se B corresponde aos últimos dígitos de A.

Entrada
A entrada consiste de vários casos de teste. A primeira linha de entrada contém um inteiro N que indica a quantidade de casos de teste. Cada caso de teste consiste de dois valores A e B maiores que zero, cada um deles podendo ter até 1000 dígitos.

Saída
Para cada caso de entrada imprima uma mensagem indicando se o segundo valor encaixa no primeiro valor, confome exemplo abaixo.
*/

using System; 

class URI {

    static void Main(string[] args) { 

int x = Int32.Parse(Console.ReadLine());
int i=0;
string[] frase = new string[2];
string a;
string b;
string sub = "";
while(i<x) {
    bool flag = true;
    frase = Console.ReadLine().Split(' ');
    a = frase[0];
    b = frase[1];
    int u = b.Length;
    int w = a.Length;
    int y = w-u;
    try {
        sub = a.Substring(y,u);
    }
    catch(Exception) {
        Console.WriteLine("nao encaixa");
        flag = false;
    }
    if(b==sub && flag==true) {
        Console.WriteLine("encaixa");
    }
    else if(b!=sub && flag==true) {
        Console.WriteLine("nao encaixa");
    }
    i++;
}

    }

}