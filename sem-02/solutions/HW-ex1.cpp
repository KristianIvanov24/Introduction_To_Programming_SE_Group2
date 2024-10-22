#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    
    bool isTriangle = a + b >= c && a + c >= b && b + c >= a;
    
    if(!isTriangle)
    {
        std::cout << "Does not exist" << std::endl;
    }
    else if(a == b && b == c)
    {
        std::cout << "Exists Equilateral" << std::endl;
    }
    else if(a == b || b == c || a == c)
    {
        std::cout << "Exists Isosceles" << std::endl;
    }
    else
    {
        std::cout << "Exists Scalene" << std::endl;
    }

    return 0;
}
