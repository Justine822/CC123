using System;
using System.Collections.Generic;

class Shelf
{
    public string[] Books;
    public string[] Authors;
    public string[] Books1;
    public string[] Authors1;
    public string ShelfGenre;

    public Shelf(string[] books, string[] authors, string genre)
    {
        Books = books;
        Authors = authors;
        Books1 = books;
        Authors1 = authors;
        ShelfGenre = genre;
    }    
        public void Details()
    {
        Console.WriteLine($"\nGenre: {ShelfGenre}");
        
        Console.WriteLine($"Author: {Authors[0]} - Book: {Books[0]}");
      
    }
        public void Detaiils(){
            Console.WriteLine($"\nGenre: {ShelfGenre}");
            
        Console.WriteLine($"Author {Authors1[1]} - Book: {Books[1]}");
        }
    
}


class Library
{
    public List<Shelf> Shelves = new List<Shelf>();

    public void AddShelf(Shelf shelf)
    {
        Shelves.Add(shelf);
    }

    public void ShowLibraryDetails()
    {
        
       foreach (var shelf in Shelves)
        {
           shelf.Details();
        }
    }
    public void ShowLibraryDetails1()
    {
        
       foreach (var shelf in Shelves)
        {
           shelf.Detaiils();
        }
    }
}


public class HelloWorld
{
    
    static void Main()
    {
    Console.WriteLine("What genre would you like horror or thriller?");
    Console.Write(": ");
    string ans = Console.ReadLine();
    
    
    if(ans==("horror"))
    {
    string[] horrorAuthors={"Harlan Ellison","Robert Louis Stevenson"};
    
    string[] horrorBooks={"I have no mouth i must scream","Dr Jekyll and Mr Hyde"};

     Shelf horrorShelf = new Shelf(horrorBooks, horrorAuthors, "Horror");
     
    Library library = new Library();
    library.AddShelf(horrorShelf);
    library.ShowLibraryDetails();
    } 
    else if(ans==("thriller"))
    {
    string[] thrillerAuthors1={"Harlan Ellison","Robert Louis Stevenson"};
    
    string[] thrillerBooks1={"I have no mouth i must scream","Dr Jekyll and Mr Hyde"};
    
    Shelf thrillerShelf = new Shelf(thrillerBooks1, thrillerAuthors1, "Thriller");
    
        Library library = new Library();
        library.AddShelf(thrillerShelf);
        library.ShowLibraryDetails1();
    }
        
        
        
        
        
        
        
    }
}
