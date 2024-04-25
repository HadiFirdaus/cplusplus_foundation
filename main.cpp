// cplusplus_foundation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Gameplay/Public/TheStatic.h"
#include <iostream>

int main()
{
	//int x = 0;
	//if (x == 0) {
		//static TheStatic obj;
	//}
	for (int i = 0; i < 5; i++)
	{
		//obj.StaticVariable();
		//obj.NonStaticVariable();
		//obj.cde++;
		//std::cout << obj.cde << std::endl;
		//obj.StaticFunction();
		TheStatic::cde++;
		std::cout<<TheStatic::cde;
	}
	std::cout << "the end of main" << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file