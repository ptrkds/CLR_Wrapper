using System;
using CLRWrapper;
using HelloWorldWrapper;

namespace CSharpApp
{
    class Program
    {
        unsafe static string helloWorld()
        {
            hwWrapper helloWorldWrapper = new hwWrapper();

            string helloWorld = new string(helloWorldWrapper.SayHello());

            return helloWorld;
        }


        static void Main(string[] args)
        {

            Console.WriteLine(helloWorld());

            CppMathWrapper cppMathWrapper = new CppMathWrapper();
            Console.WriteLine(cppMathWrapper.Add(1.4, 2.7));
            Console.ReadLine();
        }
    }
}


