#include <iostream>

/*
	Задача 1: Да се напише програма, която въвежда цяло число отпечатава с думи кой ден от седмицата е.

	Вход: 1, Изход: Monday

	Вход: 5, Изход: Friday

	Вход: 250, Изход: Invalid day!
*/

int main()
{
	int dayOfWeek;
	std::cin >> dayOfWeek;

	switch (dayOfWeek)
	{
		case 1: std::cout << "Monday"; break;
		case 2: std::cout << "Tuesday"; break;
		case 3: std::cout << "Wednesday"; break;
		case 4: std::cout << "Thursday"; break;
		case 5: std::cout << "Friday"; break;
		case 6: std::cout << "Saturday"; break;
		case 7: std::cout << "Sunday"; break;
		default: std::cout << "Invalid day!"; break;
	}

	return 0;
}
