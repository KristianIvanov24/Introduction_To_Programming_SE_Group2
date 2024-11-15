#include <iostream>

const int SIZE = 5;

int linearSearch(const int arr[], int size, int toFind)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == toFind)
			return i;
	}

	return -1;
}

int main()
{
  int arr[SIZE] = {1, 2, 3, 4, 5};
  int toFInd = 4;

  std::cout << linearSearch(arr, SIZE, toFind);

  return 0;
}
