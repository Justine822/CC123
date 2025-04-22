using System;
 
class shape
{
    private double rad =0, s1=0,s2=0;
    public Shape()
    {
      Console.Write.Line("Shape Initialized");
    }
    public Shape(double radius)
    {
        rad=radius;
        Console.Write.Line("Circle Shape Initialized radius"+rad);
    }
    public Shape(double side1, double side2)
    {
    s1=side1;
    s2=side2;
    Console.Write.Line("Square Shape Initialized side1: "+s1+"side2 :"+s2);
    }
}

class Program 
{
    static void Main()
    {
        Shape test_shape = new Shape(side1:3.8,side2:4.5);
    }
}
