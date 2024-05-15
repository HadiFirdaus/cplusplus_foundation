#pragma once

class TheStatic {
public:
	TheStatic();
	~TheStatic();

	static int GetCount();
	static void SetCount(int num);

	static int count;
};