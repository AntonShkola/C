#include <iostream>

using namespace std;

int reverse(int* array, int size)
{
    int* left = array;
    int* right = array + size - 1;

    while (left<right)
    {
        int temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }

    return 0;
}

void printArray(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size{9};
    int array[] = { 1,2,3,4,5,6,7,8,9 };

    printArray(array, size);

    reverse(array, size);

    printArray(array, size);

    return 0;
}

