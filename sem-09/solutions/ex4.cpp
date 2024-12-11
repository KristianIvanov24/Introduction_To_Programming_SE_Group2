#include <iostream>

/*strcmp (лексикографско сравнение на стрингове)*/

// - first < second
// 0 first == second
// + first > second
int myStrcmp(const char* first, const char* second)
{
	if (!first || !second)
		return 0; //some error value

  while ((*first) && ((*first) == (*second)))
	{
		first++;
		second++;
	}

	return (*first - *second);
	 
}
