#include <iostream>

/*
2. Напишете функция, която приема неотрицателно число n и връща числото обърнато
*/

int reverseNumber(int n)
{
	int result = 0;

	while (n != 0)
	{
		(result *= 10) += n % 10;
		n /= 10;
	}

	return result;
}

int main()
{
	std::cout << reverseNumber(2881);
  return 0;
}
