// This is the main DLL file.

#include "stdafx.h"
#include <iostream>
#include "HelloWorldWrapper.h"
#include "HelloWorld.cpp"

HelloWorldWrapper::hwWrapper::hwWrapper()
{
	helloWorld = new HelloWorld();
}

wchar_t* HelloWorldWrapper::hwWrapper::SayHello()
{
	return helloWorld->SayHello();
}