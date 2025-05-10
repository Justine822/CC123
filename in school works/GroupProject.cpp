using System;

public class HelloWorld
{
    
        
    public static void Main(string[] args)
    {
        Console.WriteLine ("BANK");
        Console.WriteLine ();
        Console.WriteLine ("Register");
        Console.Write("Name: ");
        string username = Console.ReadLine();
        Console.Write("Password: ");
        string password = Console.ReadLine();
        
        Console.WriteLine ();
        
        for(int i = 1; i > 0; i++){
        Console.WriteLine ("Login");
        Console.Write("Name: ");
        string username1 = Console.ReadLine();
        Console.Write("Password: ");
        string password1 = Console.ReadLine();
        
        if((username,password)==(username1,password1))
        {
            for(int l = 1; l > 0; i++){
            int money=0 , amount=0;
            
            Console.WriteLine ("Hello " + username1 + " What do you like to do?");
            money=money+amount;
            Console.WriteLine ("Amount of Money: "+  money);
            Console.WriteLine ();
            Console.WriteLine ("1 to withdraw or 2 to deposit or 3 to leave");
            Console.Write("Put your answer here: ");
            string ans = Console.ReadLine();
            
        if((Convert.ToInt32(ans)) == 1 ){
            
            if((Convert.ToInt32(money))==0){
                Console.WriteLine();
                Console.WriteLine("Insufficient money");
                continue;
                
            }else
                Console.WriteLine();
                Console.WriteLine("How much do you like to withdraw");
                Console.Write(": ");
            string withdraw=Console.ReadLine();
            money= money - Convert.ToInt32(withdraw);
            
                continue;
            }
            
        if((Convert.ToInt32(ans)) == 2 ){
               Console.WriteLine();
                Console.WriteLine("How much do you like to deposit");
                Console.Write(": ");
            int deposit = int.Parse(Console.ReadLine());
             amount= money + Convert.ToInt32(deposit);
                continue; 
                
            }
            
        if((Convert.ToInt32(ans)) == 3 ){
            Console.WriteLine();
            Console.WriteLine("Thank you for using me");
            break;
        }
        
            }
            
            break;
        }
        else{
            Console.WriteLine ();
            Console.WriteLine ("Wrong Username or Password");
            Console.WriteLine ();
        }
        
        
        }
        
        
        }
            
    }
