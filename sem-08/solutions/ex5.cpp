#include <iostream>

/*Размяна на две променливи, без трета с побитови*/

void swap(int& a, int& b)
{
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;
}
