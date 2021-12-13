/*
Problem: 1018 Cedulas
*/
using System; 

class URI {

    static void func(int valor) {
        int a100=0,a50=0,a20=0,a10=0,a5=0,a2=0,a1=0, valor2=valor;
    while(valor>=100) {
        valor-=100;
        a100+=1;
    }
    while(valor>=50) {
        valor-=50;
        a50+=1;
    }
    while(valor>=20) {
        valor-=20;
        a20+=1;
    }
    while(valor>=10) {
        valor-=10;
        a10+=1;
    }
    while(valor>=5) {
        valor-=5;
        a5+=1;
    }
    while(valor>=2) {
        valor-=2;
        a2+=1;
    }
    while(valor>=1) {
        valor-=1;
        a1+=1;
    }
    Console.WriteLine(valor2);
    Console.WriteLine(a100+" nota(s) de R$ 100,00");
    Console.WriteLine(a50+" nota(s) de R$ 50,00");
    Console.WriteLine(a20+" nota(s) de R$ 20,00");
    Console.WriteLine(a10+" nota(s) de R$ 10,00");
    Console.WriteLine(a5+" nota(s) de R$ 5,00");
    Console.WriteLine(a2+" nota(s) de R$ 2,00");
    Console.WriteLine(a1+" nota(s) de R$ 1,00");
}

    static void Main(string[] args) { 
    int valor = Int32.Parse(Console.ReadLine());
    func(valor);
    }

}