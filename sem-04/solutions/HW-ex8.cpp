#include <iostream>

/*
Задача 8: Напишете функция, която приема символ и ако символът е цифра, да върне съответната цифра. Ако символът не е цифра, то да върне -1

Вход: '7', Изход: 7

Вход: '!', Изход: -1 //или грешка
*/

bool isNumber(char ch)
{
	return '0' <= ch && ch <= '9';
}

int charToNumber(char ch)
{
	if (!isNumber(ch))
		return -1;

	return ch - '0';
}

int main()
{
	int result = charToNumber('0');
	if (result == -1)
	{
		std::cout << "This is not a number!";
		return result;
	}

	std::cout << result;
	return 0;
}
