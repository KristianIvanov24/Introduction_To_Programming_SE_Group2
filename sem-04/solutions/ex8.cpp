#include <iostream>

/*
Задача 8: Напишете функция, която приема символ и връща съответната главна буква (ако подадения символ е малък символ)

Вход: 'а', Изход: 'А'

Вход: '!', Изход: '!' //или грешка
*/

bool isUpperCase(char ch)
{
	return 'A' <= ch && ch <= 'Z';
}

char lowerToUpperCase(char ch)
{
	if (isUpperCase(ch))
		return ch;

	return 'A' + (ch - 'a');
}

int main()
{
	std::cout << lowerToUpperCase('a');
	return 0;
}
