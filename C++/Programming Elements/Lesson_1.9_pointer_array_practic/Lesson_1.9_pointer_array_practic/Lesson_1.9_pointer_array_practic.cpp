#include <iostream>

using namespace std;

void incrementPtr(double* pointer)
{
	*pointer = *pointer + 1.5;
}

void incrementValue(int number)
{
	number = number + 5;
	//cout << number << " : Local value" << endl;
}

void incrementRef(float& b)
{
	b++;
}

void incrementArr(int* numbers, int size)
{

	cout << numbers << endl;

	for (int i = 0; i <= 2; i++)
	{
		cout << i << endl;
		cout << &numbers[i] << endl;
	}

	cout << typeid(size).name() << endl;
}

int main()
{
	/// Передача через указаатель

	double speed = 70.5;
	//cout << speed << " : Value before change" << endl;

	incrementPtr(&speed);
	//cout << speed << " : Value after change" << endl;
	
	/// Передача через значение

	int a = 10;
	//cout << a << " : Value before function call" << endl;

	incrementValue(a);
	//cout << a << " : Value after funcrion call" << endl;

	/// Передача через ссылку

	float z = 0.35;
	//cout << z << " : Value before change" << endl;

	incrementRef(z);
	//cout << z << " : Value after change" << endl;

	// Передача массива

	int array[] = { 5,7,9 };
	incrementArr(array, 3);

	return 0;
}