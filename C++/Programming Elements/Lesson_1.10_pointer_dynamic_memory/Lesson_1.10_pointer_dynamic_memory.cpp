/*#include <iostream>

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
}*/

/*#include <iostream>

using namespace std;

int main()
{
	int* dynamicVariable{ new int{} };
	cout << *dynamicVariable << endl;
	delete dynamicVariable;

	return 0;
}*/

#include <iostream>

using namespace std;

int main()
{
	cout << "Enter array size: ";
	int arraySize{ 3 };
	cin >> arraySize;

	float* floatArray{ new float[arraySize] {1.1, 2.2, 3.3} };
	for (int element{}; element < arraySize; ++element)
	{
		cout << "Element [" << element << "]: " << floatArray[element] << endl;
	}
	cout << *floatArray << endl;
	cout << floatArray;
	delete[] floatArray;

	return 0;
}