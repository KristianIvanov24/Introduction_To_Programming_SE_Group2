#include <iostream>

/*
Задача 6: Напишете функция, която приема неотрицателни числа n и k и връща дали k е префикс на n.

Вход: 288, 28, Изход: true
*/

bool isPrefix(int n, int k)
{
	// return isSufix(reverse(n), reverse(k)); // if we know that k and n don't end with 0
	while (n >= k)
	{
		if (n == k)
			return true;

		n /= 10;
	}

	return false;
}

int main()
{
	std::cout << (isPrefix(1882, 88) ? "true" : "false");
}
