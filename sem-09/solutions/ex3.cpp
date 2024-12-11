#include <iostream>

/*strcat (конкатениране на стрингове)*/

unsigned myStrlen(const char* str);

void myStrcpy(const char* source, char* dest);

void myStrcat(char* first, const char* second)
{
	if (!first || !second)
		return;
	
	size_t firstLen = myStrlen(first);
	first += firstLen;
	myStrcpy(second, first);
}
