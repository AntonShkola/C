#include <iostream>
#include "basic_prg_classes_objects.h"

using namespace std;

class Counter
{
private:
	int number{};

public:

	Counter() : number{1}
	{ }
	
	Counter(int num) : number{ num }
	{ }

	void increment() 
	{		
		number++;
	}

	void decrement()
	{		
		number--;
	}

	void showResult()
	{
		cout << number << endl;
	} 	                             

	void setNum(int num)
	{
		this->number = num;
	}
};


void countStart()
{
	string userAnswer;
	int userNumber{};
	char userInput;

	Counter count;

	cout << "Do you want to specify the initial value of the counter? Enter yes or no." << endl;
	cin >> userAnswer;

	if (userAnswer == "yes")
	{
		cout << "Enter the initial value of the counter: " << endl;
		cin >> userNumber;
		count.setNum(userNumber);
	}

	while (true)
	{
		cout << "Enter command('+', '-', '=', or 'x') : " << endl;
		cin >> userInput;

		switch (userInput)
		{
		case '+':count.increment();
			break;
		case '-':count.decrement();
			break;
		case '=':count.showResult();
			break;
		case 'x':cout << "Goodbye";
			return;
		}			
	}
}