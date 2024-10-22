#include <iostream>

int main()
{
	int x, n;
	std::cin >> x >> n;

	for (int i = 0; i < n; i++)
	{
		int numberToCheck;
		std::cin >> numberToCheck;

		if (numberToCheck == x)
		{
			std::cout << "Found!" << std::endl;
			break;
		}
	}

	return 0;
}
