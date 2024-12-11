#include <iostream>

/*
to_string (преобразуване на число в стринг)
*/

char digitToChar(unsigned n)
{
	return n + '0';
}

unsigned getDigitsCount(unsigned n)
{
	if (n == 0)
		return 1;

	unsigned count = 0;
	while (n != 0)
	{
		count++;
		n /= 10;
	}

	return count;
}

void swap(char& ch1, char& ch2)
{
	ch1 = ch1 ^ ch2;
	ch2 = ch1 ^ ch2;
	ch1 = ch1 ^ ch2;
}

void reverseString(char* str, unsigned len)
{
	for (int i = 0; i < len / 2; i++)
		swap(str[i], str[len - i - 1]);
}

void toString(int n, char* str)
{
	bool isNegative = false;

	if (n < 0)
	{
		n *= -1;
		isNegative = true;
	}

	unsigned int len = getDigitsCount(n);

	for (int i = 0; i < len; i++)
	{
		str[i] = digitToChar(n % 10);
		n /= 10;
	}

	if (isNegative)
	{
		str[len] = '-';
		len++;
	}

	str[len] = '\0';
	reverseString(str, len);
}

int main()
{
	char number[1024];
	toString(-123, number);
	std::cout << number << std::endl;

  return 0;
}
