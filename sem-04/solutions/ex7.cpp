#include <iostream>

/*
Задача 7: Напишете функция, която приема символ и дали символа е главна буква.

Вход: 'А', Изход: true

Вход: '!', Изход: false //или грешка
*/

bool isUpperCase(char ch)
{
	return 'A' <= ch && ch <= 'Z';
}

int main()
{
	std::cout << isUpperCase('a');
	return 0;
}
