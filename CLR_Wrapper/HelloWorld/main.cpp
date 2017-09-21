#include "stdafx.h"
#include <iostream>
#include "HelloWorld.h"

int main()
{
	HelloWorld *helloWorld = new HelloWorld();

	helloWorld->SayHello();
	
	free(helloWorld);
	getchar();
	return 0;
}