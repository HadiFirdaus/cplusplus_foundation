#include "TheStatic.h"
#include <iostream>

using std::cout;
using std::endl;

int TheStatic::count = 0;

TheStatic::TheStatic()
{
	//std::cout << "constructor: "<< std::endl;
	//count++;
	//cout << count<<endl;
}

TheStatic::~TheStatic()
{
	//std::cout << "destructor"<<std::endl;
}

int TheStatic::GetCount() {
	return count;
}

void TheStatic::SetCount(int num)
{
	count += num;
}
