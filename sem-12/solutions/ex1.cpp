#include <iostream>

unsigned fact(unsigned n)
{
    if(n == 0)
        return 1;
    return n * fact(n - 1);
}

int main()
{
    std::cout << fact(10);

    return 0;
}
