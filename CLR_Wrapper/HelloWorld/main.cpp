#include "stdafx.h"
#include <iostream>
#include "HelloWorld.h"

int main()
{
	HelloWorld *helloWorld = new HelloWorld();

	helloWorld->SayThis();
	
	free(helloWorld);
	getchar();
	return 0;
}