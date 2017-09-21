#include "stdafx.h"
#include <iostream>
#include "CppMath.h"

int main()
{
	CppMath *cppMath = new CppMath();
	double result = cppMath->Add(1.4, 2.7);
	std::cout << "Result is " << result << "\n";

	try
	{
		result = cppMath->Divide(3.8, 0);
		std::cout << "Result is " << result << "\n";
	}
	catch (const std::invalid_argument& e)
	{
		std::cerr << "Invalid argument : " << e.what() << '\n';
	}

	free(cppMath);
	getchar();
	return 0;
}