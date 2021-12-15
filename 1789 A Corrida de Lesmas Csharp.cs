/*
Problem: 1789 A Corrida de Lesmas
*/

using System; 

class URI {

    static void Main(string[] args) { 

while(true) {
   string input = Console.ReadLine();
   if (string.IsNullOrEmpty(input))
     break;
   int inteiro = Int32.Parse(input);
   string[] input2 = new string[inteiro];
   input2 = Console.ReadLine().Split(' ');
   int value=0;
   for(int i=0;i<inteiro;i++) {
       int value2=Int32.Parse(input2[i]);
       if(i==0) {
           value=Int32.Parse(input2[i]);
       }
       else {
           if (value<value2) {
               value=value2;
           }
       }
   }
   if(value<10) {
       Console.WriteLine(1);
   }
   else if (value>=10 && value<20) {
       Console.WriteLine(2);
   }
   else {
       Console.WriteLine(3);
   }
}
    }

}