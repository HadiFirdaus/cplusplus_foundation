#pragma once

class TheStatic {
public:
	
	TheStatic();
	~TheStatic();
	void StaticVariable();
	void NonStaticVariable();
	static int cde;
	static void StaticFunction();
	int test = 0;

};