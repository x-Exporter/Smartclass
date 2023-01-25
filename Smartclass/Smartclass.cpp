#include "Myclass.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Counter count;
	string answer;
	cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	cin >> answer;

	if (answer == "да")
	{
		cout << "Введите начальное значение счётчика: ";
		int num;
		cin >> num;
		count.set_num(num);
	}

	while (answer != "x")
	{
		cout << "Введите команду ('+', '-', '=' или 'x'): ";
		cin >> answer;
		if (answer != "x")
		{
			count.do_something(answer);
		}
	}
	cout << "До свидания!";
}