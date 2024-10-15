#include <iostream>

/*
	Задача 4 (Лице на фигура): Да се напише програма, която въвежда размерите на геометрична фигура и пресмята лицето й. 
	Фигурите са четири вида: квадрат (s), правоъгълник (r), кръг (c) и триъгълник (triangle). На първия ред на входа се чете 
	вида на фигурата (square, rectangle, circle или triangle). Ако фигурата е квадрат, на следващия ред се чете едно число – 
	дължина на страната му. Ако фигурата е правоъгълник, на следващите два реда четат две числа – дължините на страните му.
	Ако фигурата е кръг, на следващия ред чете едно число – радиусът на кръга. Ако фигурата е триъгълник, на следващите два реда
	четат две числа – дължината на страната му и дължината на височината към нея. Резултатът да се закръгли до 3 цифри след десетичната точка

	Вход: s 5 , Изход: 25

	Вход: r 7 2.5, Изход: 17.5

	Вход: c 6, Изход: 113.097
 */

const double PI = 3.14;

int main()
{
	char figure;
	std::cin >> figure;

	if (figure == 's')
	{
		double side;
		std::cin >> side;
		std::cout << side * side << std::endl;
	}
	else if (figure == 'r')
	{
		double sideA, sideB;
		std::cin >> sideA >> sideB;
		std::cout << sideA * sideB << std::endl;
	}
	else if (figure == 'c')
	{
		double R;
		std::cin >> R;
		std::cout << PI * R * R << std::endl;
	}
	else if (figure == 't')
	{
		double width;
		double height;
		std::cin >> width >> height;
		std::cout << width * height / 2 << std::endl;
	}
	else
	{
		std::cout << "Invalid figure!" << std::endl;
	}
	return 0;
}

// We can solve the task with switch too, as we did in the seminar
