#include <iostream>

/*
търсене в текст
*/

unsigned myStrlen(const char* str)
{
	if (!str)
		return 0;

	unsigned len = 0;
	while (*str)
	{
		len++;
		str++;
	}

	return len;
}
char toLower(char ch);

bool isPrefix(const char* text, const char* pattern)
{
	while (*pattern != '\0' && *text != '\0')
	{
		if (toLower(*pattern) != toLower(*text))
			return false;

		text++;
		pattern++;
	}

	return *pattern == '\0';
}

bool searchInText(const char* text, const char* pattern)
{
	size_t textLen = myStrlen(text);
	size_t patternLen = myStrlen(pattern);

	while (textLen >= patternLen)
	{
		if (isPrefix(text, pattern))
			return true;

		text++;
		textLen--;
	}

	return false;
}

int main()
{
  char str[] = "hello guys!";
  char pattern[] = "guys";
  std::cout << searchInText(str, pattern) << std::endl;

  return 0;
}
