using System;
using CLRWrapper;
using HelloWorldWrapper;

namespace CSharpApp
{
    class Program
    {
        static void Main(string[] args)
        {
            CppMathWrapper cppMathWrapper = new CppMathWrapper();
            Console.WriteLine(cppMathWrapper.Add(1.4, 2.7));
            Console.ReadLine();
        }
    }
}
