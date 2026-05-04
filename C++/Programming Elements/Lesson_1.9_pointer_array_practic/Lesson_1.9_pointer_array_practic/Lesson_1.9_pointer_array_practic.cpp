#include <iostream>

using namespace std;

int main()
{
	int number = 5;
	cout << typeid(&number).name();

	return 0;
}