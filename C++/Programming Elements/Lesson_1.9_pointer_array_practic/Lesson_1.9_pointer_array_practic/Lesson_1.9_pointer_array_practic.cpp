#include <iostream>

using namespace std;

int main()
{

	int variable{ 100 };
	int* ptrVariable{ &variable };

	cout << variable << endl;
	cout << &variable << endl;
	cout << ptrVariable << endl;
	cout << &ptrVariable << endl;
	cout << *ptrVariable << endl;
	
	*ptrVariable = 3000;

	cout << variable << endl;

	return 0;
}