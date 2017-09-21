// HelloWorldWrapper.h

#include "HelloWorld.h"
#include <iostream>

#pragma once

using namespace System;

namespace HelloWorldWrapper {

	public ref class hwWrapper
	{
	public:
		hwWrapper();
		wchar_t* SayHello();
	private:
		HelloWorld *helloWorld;
	};
}