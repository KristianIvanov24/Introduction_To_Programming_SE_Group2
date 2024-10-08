/*
Задача 4: Въвежа се малка латинска буква. Да се отпечата на екрана еквивалентната голяма буква

Вход: а, Изход: А

Вход: е, Изход: Е
*/

#include <iostream>

const int ASCII_OFFSET = 32;

int main()
{
	char ch;
	std::cin >> ch;

	char bigLetter = ch - ASCII_OFFSET;
	std::cout << bigLetter;

  return 0;
}
