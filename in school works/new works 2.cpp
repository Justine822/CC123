using System;

public class app
{
 
   public static void Main(string[] args)
        {
            Console.Write("Enter Limit: ");
            string text=Console.ReadLine();
            int limit =Convert.ToInt32(text);
            
            
            for(int i=0; i<limit; i++){
                for(int k=limit; k>i+1; k--){
                    Console.Write("  ");
                }
                for(int j=0; j<i+1; j++){
                    Console.Write("*   ");
                }
                Console.WriteLine();
            }
             for(int i=0; i<limit; i++){
                for(int j=0; j<i+1; j++){
                    Console.Write("  ");
                }
                for(int k=limit; k>i+1; k--){
                    Console.Write("*   ");
                }
                Console.WriteLine();
            }
        }
    }
