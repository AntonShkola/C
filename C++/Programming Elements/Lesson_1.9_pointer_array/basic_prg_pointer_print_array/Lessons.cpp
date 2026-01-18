#include <iostream>

using namespace std;

void function(int& reference)
{

}

void printArray(int* integers, int size)
{
    for (int counter{}; counter < size; ++counter)
    {
        cout << integers[counter] << " ";
    }
}


int Lpointer()
{
    int a = 5;
    int* ptr_a = &a;

    cout << ptr_a << endl; // значение указателя (адрес переменной)
    cout << &a << endl; // адрес переменной
    cout << a << endl; // значение переменной
    cout << *ptr_a << endl; // разыменование адреса переменной (значение)

    *ptr_a = 10; // изменение значения переменной через указатель

    cout << a << endl; // новое значение переменной

    return 0;
}

int Larray()
{
    int arr[] = { 5,3,4 };
    cout << "array adress " << arr << endl;
    cout << "array 0: value " << arr[0] << endl;
    cout << "array 1: value " << arr[1] << endl;
    cout << "array 2: value " << arr[2] << endl;

    cout << endl;

    cout << &arr << endl;
    cout << &arr[0] << endl;

    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "number " << i << " adress " << &arr[i] << " value " << *&arr[i] << endl;      
    }

    return 0;
}

int main()
{
    //Larray();
    //Lpointer();

    //int variable{ 100 };
    //cout << "variable  " << variable << endl;
    //cout << "type  " << typeid(&variable).name() << endl;
    //cout << "address  " << &variable << endl;

    int variable{ 100 };
    int* pVariable{&variable};
    int** ppVariable{&pVariable};
    int*** pppVariable{ &ppVariable };

    const int size{ 5 };
    int integers[size]{ 1,2,3,4,5 };

    printArray(integers, size);

    //cout << "value " << variable << endl;
    //cout << "address variable " << &variable << endl;
    //cout << "adress via pointer " << pVariable << endl;
    //cout << "pointer adress " << &pVariable << endl;
    //cout << "value via pointer " << *pVariable << endl;
    //cout << "value pointer " << *(&pVariable) << endl;

    //cout << "\n" << endl;

    *pVariable = 200;

    //cout << pVariable << endl;

    cout << "\n";

    //function(pVariable);

    //cout << variable << endl;

    return 0;
}
