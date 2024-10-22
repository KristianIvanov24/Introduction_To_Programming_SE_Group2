#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    
    int ones, tens, hundreds;
    
    ones = n % 10;
    n /= 10;
    
    tens = n % 10;
    n /= 10;
    
    hundreds = n % 10;
    
    if(ones != tens && tens != hundreds && ones != hundreds)
    {
        std::cout << "yes " << ones * hundreds << std::endl;
    }
    else
    {
        std::cout << "no " << ones << tens << hundreds << std::endl;
    }
    
    return 0;
}
