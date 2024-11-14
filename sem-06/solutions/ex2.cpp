#include <iostream>

const int SIZE = 4;

void swap(int& a, int& b)
{
    a += b;
    b = a - b;
    a -= b;
}

void reverse(int arr[], int size)
{
    int half = size / 2;
    for (int i = 0; i < half; i++)
        swap(arr[i], arr[size - i - 1]);
}

int main() 
{
    int arr[] = { 1, 2, 3, 4 };
  
    reverse(arr, SIZE);
  
    for (int i = 0; i < SIZE; i++)
        std::cout << arr[i];
  
    return 0;
}
