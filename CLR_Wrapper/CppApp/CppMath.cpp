// CppApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CppMath.h"


double CppMath::Add(double arg1, double arg2)
{
	return arg1 + arg2;
}

double CppMath::Subtract(double arg1, double arg2)
{
	return arg1 - arg2;
}

double CppMath::Multiply(double arg1, double arg2)
{
	return arg1*arg2;
}

double CppMath::Divide(double arg1, double arg2)
{
	if (arg2 == 0)
		throw std::invalid_argument("arg2 can't be zero");
	return arg1 / arg2;
}