#pragma once
#include <Windows.h>
#include <string>
#include <iostream>
using namespace std;

class Counter
{
private:
	int num;
public:
	Counter();
	Counter(int num);
	void set_num(int num);
	void do_something(string symbol);
	int get_num()
	{
		return num;
	}
};