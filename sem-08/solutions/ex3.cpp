#include <iostream>

/*Изчистване на бит (да стане 0)*/

unsigned makeBitZero(unsigned int n, unsigned int ind) //clear bit
{
    unsigned int mask = 1;
    mask <<= ind;
    
    mask = ~mask;
    
    return n & mask;
}
