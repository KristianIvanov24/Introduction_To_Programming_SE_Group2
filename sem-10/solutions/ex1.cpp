#include <iostream>

/*atoi (преобразуване на стринг в число)*/

unsigned charToInt(char ch)
{
	return ch - '0';
}

unsigned stringToNumber(const char* str)
{
	unsigned result = 0;
	while (*str)
	{
		int digit = charToInt(*str);
		(result *= 10) += digit;

		str++;
	}

	return result; 
}

int myAtoi(const char* str)
{
	if (*str == '-')
	{
		return -1 * stringToNumber(str + 1);
	}

	return stringToNumber(str);
}


int main()
{
	std::cout << myAtoi("-123") << std::endl;

  return 0;
}
