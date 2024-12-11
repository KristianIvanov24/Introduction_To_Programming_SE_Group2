#include <iostream>

/*strcpy (копиране на стринг)*/

void myStrcpy(const char* source, char* dest)
{
	if (!source || !dest)
		return;
  
	while (*source)
	{
		*dest = *source;
		dest++;
		source++;
	}
  
	*dest = '\0';
}
