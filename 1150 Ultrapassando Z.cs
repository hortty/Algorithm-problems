/*
Problem: 1150 Ultrapassando Z
*/

using System; 

class URI {

    static void Main(string[] args) { 

   var R = Int32.Parse(Console.ReadLine());
      var V = 0;
      
      var contador = 1;
        
      do
      {
        V = Int32.Parse(Console.ReadLine());
      } 
      
      while (V <= R);
      
      int i = R;
      
      while (i <= V)
      {
        contador++;

        R += 1;
        i += R;
      }
      
      Console.WriteLine(contador); 

    }

}