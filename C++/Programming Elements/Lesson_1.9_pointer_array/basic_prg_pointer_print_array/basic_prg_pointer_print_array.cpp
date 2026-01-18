#include <iostream>

using namespace std;

void printArray(int* array, int size)
{
	for (int counter{}; counter < size; counter++)
	{
		cout << array[counter] << ' ';
	}	
	cout << endl;
}

int main()
{
	int sizeFirst{ 5 };
	int sizeSecond{ 3 };
	int sizeThird{ 2 };

	int arrayFirst[] = { 1, 2, 3, 4, 5 };
	int arraySecond[] = { 6, 7, 8 };
	int arrayThird[] = { 9, 10 };

	printArray(arrayFirst, sizeFirst);
	printArray(arraySecond, sizeSecond);	
	printArray(arrayThird, sizeThird);
	 
}

