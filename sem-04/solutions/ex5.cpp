#include <iostream>

/*
* Задача 5: Напишете функция, която приема неотрицателно числа n и k връща log_k(n) (закръглено надолу)

Вход: 90 3 Изход: 4
*/

int log(int n, int k)
{
	int poweredK = 1;
	int count = 0;

	while (poweredK <= n)
	{
		poweredK *= k;
		count++;
	}

	return count - 1;
}
 
int main()
{
	std::cout << log(90, 3);
  return 0;
}
