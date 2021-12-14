/*
Problem: 1151 Fibonacci Facil
*/

using System; 

class URI {

    static void Main(string[] args) { 

    int num = Int32.Parse(Console.ReadLine());
    int[] vet = new int[50];
    vet[0] = 0;
    vet[1] = 1;
    vet[2] = 1;
    for(int i=3;i<50;i++) {
        vet[i] = vet[i-1]+vet[i-2];
    }
    for(int i=0;i<num;i++) {
    if(i==(num-1)){
        Console.Write(vet[i]);
    }
    else {
        Console.Write(vet[i]+" ");
    }
    }
    Console.WriteLine();
    }

}