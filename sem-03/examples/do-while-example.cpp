#include <iostream>

int main()
{
	int a = 0;

	while (a != 0)
	{
		std::cout << a;
	}

	do
	{
		std::cout << a;
	} 
	while (a != 0);

	return 0;
}
