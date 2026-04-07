/*void function(int*& pVariable)
{

	*pVariable = 800;

	cout << pVariable << endl;

	pVariable = nullptr;

}

int main()
{

	int variable{ 100 };
	int* ptrVariable{ &variable };

	cout << variable << endl;
	cout << &variable << endl;
	cout << ptrVariable << endl;
	cout << &ptrVariable << endl;
	cout << *ptrVariable << endl;
	
	*ptrVariable = 300;

	function(ptrVariable);

	cout << variable << endl;
	cout << ptrVariable << endl;

	return 0;
} */

#include <iostream>

using namespace std;

void printArray(int* integers, int size)
{
	for (int counter{}; counter < size; ++counter)
	{
		cout << integers[counter] << " ";
	}

}

int main()
{

	int variable{ 100 };
	int* pVariable{ &variable }; // &int -> int*
	int** ppVariable{ &pVariable };
	int*** pppVariable{ &ppVariable };

	//cout << **pppVariable << endl;

	const int size{ 5 };
	int integers[size]{ 1,2,3,4,5 };
	printArray(integers,size);

	
	return 0;
}