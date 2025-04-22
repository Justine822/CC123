using System;

class Shape
{
    protected double radius =0, side1=0,side2=0;
    public Shape()
    {
      Console.WriteLine("Shape Initialized");
    }
    public Shape(double radius)
    {
        this.radius=radius;
        //Console.WriteLine("Circle Shape Initialized radius"+rad);
    }
    public Shape(double side1, double side2)
    {
    this.side1=side1;
    this.side2=side2;
    //Console.WriteLine("Square Shape Initialized side1: "+s1+"side2 :"+s2);
    }
}
class Circle : Shape
{
    public Circle(double radius) : base(radius)
    {
        Console.WriteLine("Circle Initialized radius : "+this.radius);
    }
    
}
class Square : Shape
{
    public Square (double side1, double side2) : base(side1,side2)
    {
        Console.WriteLine("Square Initialized side1: "+this.side1+" side2: "+this.side2);
    }
    
}

class Program 
{
    static void Main()
    {
        Circle test_shape = new Circle(4.5);
        Square test_shape2 = new Square(side1:4.2, side2:4.5);
        //Shape test_shape = new Shape(side1:3.8,side2:4.5);
    }
}
