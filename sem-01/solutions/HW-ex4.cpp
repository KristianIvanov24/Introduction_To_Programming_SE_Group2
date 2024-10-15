#include <iostream>

int main()
{
    int money;
    std::cin >> money;
        
    int hundred = money / 100;
    std::cout << hundred << "x100 lv" << std::endl;
    money = money % 100;
    
    int fifty = money / 50;
    std::cout << fifty << "x50 lv" << std::endl;
    money = money % 50;
    
      
    int twenty = money / 20;
    std::cout << twenty << "x20 lv" << std::endl;
    money = money % 20;
    
    int ten = money / 10;
    std::cout << ten << "x10 lv" << std::endl;
    money = money % 10;
    
    int five = money / 5;
    std::cout << five << "x5 lv" << std::endl;
    money = money % 5;
    
    int two = money / 2;
    std::cout << two << "x2 lv" << std::endl;
    money = money % 2;
    
    std::cout << money << "x1 lv" << std::endl;

    return 0;
}
