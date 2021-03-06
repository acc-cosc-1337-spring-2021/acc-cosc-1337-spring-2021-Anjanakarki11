//cpp
#include"loops.h"
#include"iostream"
using std::cout; using std::cin;
int factorial(int num)
{
    int fact = 1;
    int index = 1;

    while (index <= num)
    {
        cout<<index;
        fact = fact * index;
        index++;
        cout<<fact;
    }
    return fact;
}