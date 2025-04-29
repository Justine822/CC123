using System;
using System.Collections.Generic;

class Shelf
{
    public string[] Books;
    public string[] Authors;
    public string ShelfGenre;

    public Shelf(string[] books, string[] authors, string genre)
    {
        Books = books;
        Authors = authors;
        ShelfGenre = genre;
    }

    public void Details()
    {
        Console.WriteLine($"\nGenre: {ShelfGenre}");
        for (int i = 0; i < Books.Length; i++)
        {
            Console.WriteLine($"Author: {Authors[i]} - Book: {Books[i]}");
        }
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
}

class Program
{
    static void Main()
    {
        // Create Horror Shelf
        string[] horrorBooks = { "IT", "Dracula", "Frankenstein" };
        string[] horrorAuthors = { "Stephen King", "Bram Stoker", "Mary Shelley" };
        Shelf horrorShelf = new Shelf(horrorBooks, horrorAuthors, "Horror");

        // Create Romance Shelf
        string[] romanceBooks = { "Pride and Prejudice", "Me Before You", "The Notebook" };
        string[] romanceAuthors = { "Jane Austen", "Jojo Moyes", "Nicholas Sparks" };
        Shelf romanceShelf = new Shelf(romanceBooks, romanceAuthors, "Romance");

        // Create Library and add shelves
        Library library = new Library();
        library.AddShelf(horrorShelf);
        library.AddShelf(romanceShelf);

        // Display all shelf details
        library.ShowLibraryDetails();
    }
}
