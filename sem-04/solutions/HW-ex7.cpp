#include <iostream>

/*
Задача 7: Напишете функция, която приема неотрицателни числа n и k и връща дали k е инфикс в n.

Вход: 2831, 83, Изход: true
*/

bool isSufix(int n, int k)
{
	while (k != 0)
	{
		if (n % 10 != k % 10)
			return false;

		n /= 10;
		k /= 10;
	}

	return true;
}

bool isInfix(int n, int k)
{
	while (n >= k)
	{
		if (isSufix(n, k))
			return true;
		
		n /= 10;
	}

	return true;
}

int main()
{
	std::cout << (isInfix(1882, 88) ? "true" : "false");
}
