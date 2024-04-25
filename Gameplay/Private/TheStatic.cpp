#include "TheStatic.h"
#include <iostream>

int TheStatic::cde = 1;

TheStatic::TheStatic()
{
	std::cout << "constructor" << std::endl;
}

TheStatic::~TheStatic()
{
	std::cout << "destructor"<<std::endl;
}

void TheStatic::StaticVariable()
{
	static int abc = 1;
	abc++;
	std::cout << abc << std::endl;
}

void TheStatic::NonStaticVariable()
{
	int abc = 1;
	abc++;
	std::cout << abc << std::endl;
}

void TheStatic::StaticFunction()
{
	cde++;
	std::cout << cde << std::endl;
}
