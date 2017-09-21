// HelloWorld.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "HelloWorld.h"
#include <iostream>


wchar_t* HelloWorld::SayHello()
{
	wchar_t * helloWorld;
	helloWorld = L"Hello World!!\n";

	return helloWorld;
}