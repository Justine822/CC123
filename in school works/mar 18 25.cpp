using System;

public class app
{
 
   public static void Main(string[] args)
        {
            for(int i=0; i<5; i++){
                for(int k=5; k>i+1; k--){
                    Console.Write(" ");
                }
                for(int j=0; j<i+1; j++){
                    Console.Write("* ");
                }
                Console.WriteLine();
            }
             for(int i=0; i<5; i++){
                for(int j=0; j<i+1; j++){
                    Console.Write(" ");
                }
                for(int k=5; k>i+1; k--){
                    Console.Write("* ");
                }
                Console.WriteLine();
            }
        }
    }
