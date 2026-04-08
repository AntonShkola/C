#include <iostream>

int main()
{
	const int arrayElements{ 1 }; // переменная константа с числом элементов массива
	int arraySize{ arrayElements * sizeof(int) }; // количество байт, которое нужно выделить в динамической памяти
	int* integers{ static_cast<int*>(malloc(arraySize)) }; // выделение в памяти нужного количества байт

	if (integers) // проверяем не является ли указатель 0: if (integers != nullptr)
	{

	}

	return 0;
}