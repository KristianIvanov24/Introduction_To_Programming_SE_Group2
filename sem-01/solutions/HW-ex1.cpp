#include <iostream>

int main()
{
	int grade;
	std::cin >> grade;
		
	bool isValidGrade = grade >= 2 && grade <= 6;

	std::cout << isValidGrade << std::endl;
}
