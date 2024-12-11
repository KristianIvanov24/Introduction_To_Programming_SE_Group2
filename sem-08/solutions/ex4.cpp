#include <iostream>

/*Вдигане на бит (да стане 1)*/

unsigned makeBitOne(unsigned int n, unsigned int ind) //set bit
{
    unsigned int mask = 1;
    mask <<= ind;
    
    return n | mask;
}
