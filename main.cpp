// cplusplus_foundation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "TheStatic.h"
#include "MyTemplate.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	auto num0 = Max(10, 5);
	std::cout << num0 << endl;
	auto num = Max<double>(5, 11.5);	//specifying the type Max<double> T = double
	std::cout << num<<endl;
	auto char0 = Max('a', 'b');
	std::cout << char0 << endl;
	//for (int i = 0; i < 5; i++) {
	//	//TheStatic::SetCount(2);
	//	//std::cout << TheStatic::GetCount() << std::endl;
	//}
	//TheStatic obj1;
	//obj1.SetCount(5);
	//std::cout << obj1.GetCount() << std::endl;
	//TheStatic obj2;
	//obj2.SetCount(3);
	//std::cout << obj2.GetCount() << std::endl;
	//TheStatic::SetCount(10);
	//std::cout << TheStatic::GetCount() << std::endl;
	//std::cout << "the end of main" << std::endl;
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