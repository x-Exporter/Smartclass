#include "Myclass.h"

Counter :: Counter(int num)
{
	set_num(num);
}

Counter::Counter()
{
}

void Counter::set_num(int num)
{
	this->num = num;
}
void Counter::do_something(string symbol)
{
	if (symbol == "+")
	{
		num++;
	}
	if (symbol == "-")
	{
		num--;
	}
	if (symbol == "=")
	{
		cout << num << endl;
	}
}