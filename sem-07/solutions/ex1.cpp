#include <iostream>

const int SIZE = 10;

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

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void transposeMatrix(int arr[][SIZE], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			swap(arr[i][j], arr[j][i]);
		}
	}
}

int main()
{
  int matrix[SIZE][SIZE];
  int n;
  std::cin >> n;

  inputArrayElements(matrix, n, n);
  print(matrix, n, n);

  transposeMatrix(matrix, n);
  print(matrix, n, n);
  
  return 0;
}
