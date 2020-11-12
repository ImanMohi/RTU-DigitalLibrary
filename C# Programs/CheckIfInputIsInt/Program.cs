using System;
using System.Linq;
using System.Collections.Generic;

namespace CheckIfInputIsInt
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Input:");
            string input = Console.ReadLine();

            List<char> inputAsCharsList = input.ToCharArray().ToList();
            int numbersInChar = 0;

            foreach(char a in inputAsCharsList)
            {
                if(Char.IsNumber(a))
                {
                    numbersInChar++;
                }
            }

            if(inputAsCharsList.Count == numbersInChar)
                Console.WriteLine("Your input is int");
            else
                Console.WriteLine("Your input isn't integer type");

            Console.ReadKey();
        }
    }
}
