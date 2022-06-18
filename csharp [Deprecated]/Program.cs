// See https://aka.ms/new-console-template for more information
using System;
using CyOA_GetBitches;
using static Functions;

namespace GetBitches // Note: actual namespace depends on the project name.
{
    internal class Program
    {
        public static string YN = "Y";
        public static string Name = "Joe Mama";
        public static string CyOA = "1";
        static void Main(string[] args)
        {
            name();

            Print("Which route do you want to go?");
            Print("1. Slow and steady: More reliable, typically used for long-term relationships");
            YN = Input("2. Get Bitches: Quick, great for one-night stands, almost guaranteed to fall off sometime in the next month");
            if (YN == "1")
            {
                SlowAndSteady.Story();
            }
            if (YN == "2")
            {
                GetBitchQuick.Story();
            }
        }
        static void name()
        {
            Name = Input("What is your name?");
            YN = Input("Your name is " + Name + "? [Y/n]");
            if(YN == "N" || YN == "n")
            {
                name();
            }
        }
    }
}