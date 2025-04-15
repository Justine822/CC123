
using System;

 class HelloWorld
{
    public void classMethod(int num1, int num2)
    {
        console.WriteLine(num1 + num2);
        console.WriteLine(num1 + "" + num2);
        console.WriteLine($"{num1}{num2}");
       
    }
    public MyClass(int classNo)
    {
         console.WriteLine("My Class" + classNo);
    }
    static int Add(int num3)
    {
        int num1 = 10, num2 = 20;
        return num1 + num2 + num3;
    }
    static double Divide (double x, double y)
    {
        return x / y;
    }
    static int mycalc(int num)
    {
        int total = Add(num);
        return total;
    }
    static int mycalc(int num1, int num2, int num3)
    {
        return num1+num2+num3;
    }
    static double mycalc(double num1, double num2)
    {
        double total = Divide(x: num1, y: num2);
        return total;
    }
    static void Main()
    {
        MyClass BS2AA = new MyClass(2);
        BS2AA.classMethod(num1:10 , num2: 20);
        
        
        
        //Console.WriteLine (mycalc(num1 : 18.5, num2: 0.8));
        //Console.WriteLine (mycalc(30));
        //Console.WriteLine (mycalc(num1: 10, num2: 20, num3: 6));
    }
}
