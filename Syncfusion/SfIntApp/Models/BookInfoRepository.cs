using System.Collections.ObjectModel;

namespace SfIntApp.Models;

public record BookInfo(string BookName, string BookDescription);

public class BookInfoRepository
{
    private ObservableCollection<BookInfo> bookInfo;

    public ObservableCollection<BookInfo> BookInfo
    {
        get { return bookInfo; }
        set { this.bookInfo = value; }
    }

    public BookInfoRepository()
    {
        GenerateBookInfo();
    }

    internal void GenerateBookInfo()
    {
        bookInfo =
        [
            new BookInfo(BookName: "Object-Oriented Programming in C#", BookDescription: "Object-oriented programming is a programming paradigm based on the concept of objects"),
            new BookInfo(BookName: "C# Code Contracts", BookDescription: "Code Contracts provide a way to convey code assumptions"),
            new BookInfo(BookName: "Machine Learning Using C#", BookDescription: "You will learn several different approaches to applying machine learning"),
            new BookInfo(BookName: "Neural Networks Using C#", BookDescription: "Neural networks are an exciting field of software development"),
            new BookInfo(BookName: "Visual Studio Code", BookDescription: "It is a powerful tool for editing code and serves for end-to-end programming"),
            new BookInfo(BookName: "Android Programming", BookDescription: "It provides a useful overview of the Android application life cycle"),
            new BookInfo(BookName: "iOS Succinctly", BookDescription: "It is for developers looking to step into frightening world of iPhone"),
            new BookInfo(BookName: "Visual Studio 2015", BookDescription: "The new version of the widely-used integrated development environment"),
            new BookInfo(BookName: "Xamarin.Forms", BookDescription: "It creates mappings from its C# classes and controls directly"),
            new BookInfo(BookName: "Windows Store Apps", BookDescription: "Windows Store apps present a radical shift in Windows development"),
        ];
    }
}
