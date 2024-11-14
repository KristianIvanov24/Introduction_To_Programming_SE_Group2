#include <iostream>

const int SIZE = 20;

void print(int arr[][SIZE], int rows, int colls)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < colls; j++)
			std::cout << arr[i][j] << " ";

		std::cout << std::endl;
	}

  std::cout << std::endl;
}

void inputArrayElements(int arr[][SIZE], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cout << "arr[" << i << "]" << "[" << j << "]: ";
			std::cin >> arr[i][j];
		}
	}
}

void multiplyMatrices(int arr[][SIZE], int arr2[][SIZE], int n, int m, int k)
{
	int res[SIZE][SIZE] = { 0 };

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			for (int l = 0; l < m; l++)
			{
				res[i][j] += arr[i][l] * arr2[l][j];
			}
		}
	}

	print(res, n, k);
}

int main()
{
	int arr[SIZE][SIZE];
	int n, m;
	std::cin >> n >> m;
	inputArrayElements(arr, n, m);

	int arr2[SIZE][SIZE];
	int k;
	std::cin >> k;
	inputArrayElements(arr2, m, k);

	multiplyMatrices(arr, arr2, n, m, k);

	return 0;
}
