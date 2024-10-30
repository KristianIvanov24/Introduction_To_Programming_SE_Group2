#include <iostream>

/*
* Задача 3: Напишете функция, която приема неотрицателни числа n и k и връща дали k е суфикс на n.
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

int main()
{
	std::cout << (isSufix(288, 88) ? "true" : "false");
	return 0;
}
