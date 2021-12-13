/*
Problem: 1036 Formula de Bhaskara
*/
using System; 

class bhaskara {
    private double a1=0,b1=0,c1=0;
    public void func(double a, double b, double c) {
        a1=a;
        b1=b;
        c1=c;
    }
    public void calc() {
        double R1=0,R2=0;
        bool flag = true;
            double delta = (Math.Pow(b1,2)-(4*a1*c1));
            if(delta>=0 && a1!=0) {
                R1 = ((-b1)+Math.Sqrt(delta))/(2*a1);
                R2 = ((-b1)-Math.Sqrt(delta))/(2*a1);
            }
            else {
                Console.WriteLine("Impossivel calcular");
                flag=false;
            }
            if(flag==true) {
            Console.WriteLine("R1 = "+R1.ToString("0.00000"));
            Console.WriteLine("R2 = "+R2.ToString("0.00000"));
            }
    }
}
class URI {
    static void Main(string[] args) {
        string[] value = new string[3];
        bhaskara bha = new bhaskara();
        value = Console.ReadLine().Split(' ');
        double a = Double.Parse(value[0]);
        double b = Double.Parse(value[1]);
        double c = Double.Parse(value[2]);
        bha.func(a,b,c);
        bha.calc();
    }
}