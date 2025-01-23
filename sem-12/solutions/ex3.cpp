#include <iostream>

int power(int n, int k)
{
    if(k == 0)
        return 1;
    return n * power(n , k - 1);
}

int fastPower(int n, int k)
{
    if(k == 0)
        return 1;
    else if(k % 2 == 1)
        return n * fastPower(n , k - 1);
    else
        return fastPower(n * n , k/ 2) ;
}

int main()
{
    std::cout << power(2, 8);
    std::cout << fastPower(2, 8);
  
    return 0;
}
