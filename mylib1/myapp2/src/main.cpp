#include <iostream>

#include "foo.h"
int main(int argc, char** argv)
{
	std::cout << "myapp2, using lib foo: " << foo() << std::endl;
	return 0;
}
