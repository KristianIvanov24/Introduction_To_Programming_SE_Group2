#include <iostream>
/*
* Задача 1: Въвежда се неотрицателно число n. Да се отпечатат всички двойки прости числа, които са във вида 6k-1 и 6k+1.
*/

bool isPrime(int n)
{
	if (n <= 1)
		return false;

	double end = sqrt(n);

	for (int i = 2; i <= end; i++)
	{
		if (n % i == 0)
			return false;
	}

	return true;
}

int main()
{
  //solution without functions
  {
  	int n;
  	std::cin >> n;
  
  	for (int i = 6; i < n; i += 6)
  	{
  		int firstNumber = i - 1;
  		
  		bool isFirstPrime = true;
  		double end = sqrt(firstNumber);
  
  		for (int j = 2; j <= end; j++)
  		{
  			if (firstNumber % j == 0)
  			{
  				isFirstPrime = false;
  				break;
  			}
  		}
  
  		if (!isFirstPrime)
  			continue;
  
  		int secondNumber = i + 1;
  		bool isSecondtPrime = true;
  		end = sqrt(secondNumber);
  
  		for (int j = 2; j <= end; j++)
  		{
  			if (secondNumber % j == 0)
  			{
  				isSecondtPrime = false;
  				break;
  			}
  		}
  
  		if (isFirstPrime)
  			std::cout << firstNumber << ' ' << secondNumber << std::endl;
  	}
  }

  //solution with functions
  {
    int n;
  	std::cin >> n;
  
  	for (int i = 6; i < n; i += 6)
  	{
  		if (isPrime(i - 1) && isPrime(i + 1))
  			std::cout << i - 1 << ' ' << i + 1 << std::endl;
  	}
  }
return 0;
}
