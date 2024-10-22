#include <iostream>

int main()
{
	int x;
	int y;
	int radius;

	std::cin >> x >> y >> radius;

  int line = x * x + y * y;
  int squareOfRadius = radius * radius;
  
	if (line < squareOfRadius)
	{
		std::cout << "In the circle";
	}
	else if (line == squareOfRadius)
	{
		std::cout << "On the circle";
	}
	else
	{
		std::cout << "Out of the circle";
	}
}
