/*
Problem: 1142 PUM
*/

using System; 

class URI {

    static void func(int num) {
        for(int i=1;i<=(4*num);i++) {
            if(i%4==0) {
                Console.WriteLine("PUM");
            }
            else {
                Console.Write(i+" ");
            }
        }
    }
    static void Main(string[] args) { 

    int num = Int32.Parse(Console.ReadLine());
    func(num);
    }

}