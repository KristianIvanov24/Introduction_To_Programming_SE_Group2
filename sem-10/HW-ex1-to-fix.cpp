#include <iostream>

/*
Задача 1: Напишете функция, която приема 3 стринга - text, where и what и земства в text 
всяко срещане на where с what. (оправете грешката в задачата)

Вход: "I am the best of the best", "best" , "worst" , Изход: "I am the worst of the worst"
*/

unsigned MyStrlen(const char* str)
{
	if (!str)
		return 0;

	unsigned count = 0;
	while (*str)
	{
		count++;
		str++;
	}

	return count;
}

void MyStrcpy(const char* source, char* destination)
{
	while(*source)
	{
		*destination = *source;
		source++;
		destination++;
	}

	*destination = '\0';
}

void MyStrcat(char* lhs, const char* rhs)
{
	unsigned lenLhs = MyStrlen(lhs);
	lhs += lenLhs;

	while (*rhs)
	{
		*lhs = *rhs;
		lhs++;
		rhs++;
	}

	*lhs = '\0';
}

void replaceInText(char* text, const char* where, const char* what)
{
	unsigned whereLen = MyStrlen(where);
	unsigned whatLen = MyStrlen(what);
	while (*text)
	{
		if (isPrefix(text, where))
		{
			char copySecondPart[1024];
			MyStrcpy(text + whereLen, copySecondPart);
			MyStrcat(text, what);
			text += whatLen;
			MyStrcat(text, copySecondPart);
		}

		text++;
	}
}
