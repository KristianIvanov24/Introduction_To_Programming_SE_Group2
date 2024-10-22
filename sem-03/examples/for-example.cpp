#include <iostream>

int main()
{
	int x, n;
	std::cin >> x >> n;

	for (int i = 1; i <= n; i++)
	{
		std::cout << x + i << ' ';
	}

	std::cout << std::endl;

	//we can also do
	int i = 1;
	for (; i <= n; i++)
	{
		std::cout << x + i << ' ';
	}

	//std::cout << i; //will be != 1

	/*
	//infinite loops examples:

	for (int i = 1;; i++)
	{
		std::cout << x + i << ' ';
	}

	or

	for (int i = 1; i <= n;)
	{
		std::cout << x + i << ' ';
	}

	*/

	return 0;
}
