// HelloWorldWrapper.h

#include "HelloWorld.h"

#pragma once

using namespace System;

namespace HelloWorldWrapper {

	public ref class hwWrapper
	{
	public:
		hwWrapper();
		void SayHello();
	private:
		HelloWorld *helloWorld;
	};
}