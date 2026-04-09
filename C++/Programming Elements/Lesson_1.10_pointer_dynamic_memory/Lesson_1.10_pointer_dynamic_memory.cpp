#include <iostream>

using namespace std;

int main()
{
	const int arrayElements{ 1 }; // переменная константа с числом элементов массива
	int arraySize{ arrayElements * sizeof(int) }; // количество байт, которое нужно выделить в динамической памяти
	int* integers{ static_cast<int*>(malloc(arraySize)) }; // выделение в памяти нужного количества байт

	//cout << integers << endl;

	if (integers) // проверяем не является ли указатель 0: if (integers != nullptr)
	{
		integers[0] = 200;
		cout << integers[0] << endl;
		free(integers);
	}

	return 0;
}