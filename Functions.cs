using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

public static class Functions
{
    public static void Print(string Content)
    {
        Console.WriteLine(Content);
    }
    public static string Input(string Content)
    {
        Console.WriteLine(Content);
        string input = Console.ReadLine();
        return input;
    }
}
