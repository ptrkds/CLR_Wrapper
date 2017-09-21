// This is the main DLL file.

#include "stdafx.h"

#include "HelloWorldWrapper.h"
#include "HelloWorld.cpp"

HelloWorldWrapper::hwWrapper::hwWrapper()
{
	helloWorld = new HelloWorld();
}

void HelloWorldWrapper::hwWrapper::SayHello()
{
	helloWorld->SayThis();
}