#include <iostream>

/*
Задача 4: Напишете функция, която приема естествено число и връща дали цифрите му са еднакви.

Вход: 111111, Изход: true
*/

bool areDigitsDifferent(int n)
{
	int firstNum = n % 10;
	n /= 10;
	while (n != 0)
	{
		int currDigit = n % 10;
		if (currDigit != firstNum)
			return false;

		n /= 10;
	}

	return true;
}

int main()
{
	std::cout << (areDigitsDifferent(1111) ? "true" : "false");
	return 0;
}
