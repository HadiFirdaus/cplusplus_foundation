#pragma once

template<typename T>
T Max(T x, T y) {
	return x > y ? x : y;
}

template char Max(char x, char y);




class MyTemplate {
public:

};

//Convert the following functions into templates
//
//int Add(int x, int y); //Return the sum of two elements
//int ArraySum(int* pArr, int arrSize); //Returns the sum of array elements
//int Max(int* pArr, int arrSize); //Return the largest element in the array