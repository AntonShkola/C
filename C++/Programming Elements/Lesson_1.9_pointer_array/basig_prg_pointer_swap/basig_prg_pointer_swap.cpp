#include <iostream>

int swap(int* a, int* b)
{
    int c{*b}; // 10

    *b = *a;
    *a = c;
   
    return 0;
}

int main()
{
    int a = 5;
    int b = 10;

    std::cout << "a = " << a << ", b = " << b << std::endl;
     
    int* ptrA = &a;
    int* ptrB = &b;

    swap(ptrA, ptrB);

    std::cout << "a = " << a << ", b = " << b << std::endl;

    return 0;
}

