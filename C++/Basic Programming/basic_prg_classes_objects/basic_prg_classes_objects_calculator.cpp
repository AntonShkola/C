#include <iostream>
#include "basic_prg_classes_objects.h"

using namespace std;

class Calculator
{
private:

	double num1{};
	double num2{};

public: 
	
	Calculator(double setNum1, double setNum2) : num1{ setNum1 }, num2{ setNum2 }
	{ }

public:

	double add() { return num1 + num2; }
	double multiply() { return num1 * num2; }
	double subtract_1_2() { return num2 - num1; }
	double subtract_2_1() { return num1 - num2; }
	double divide_1_2() { return num1 / num2; }
	double divide_2_1() { return num2 / num1; }

	bool set_num1(double num1)
	{
		if (num1 != 0)
		{
			this->num1 = num1;
			return true;
		}
		else
		{			
			return false;
		}
	}

	bool set_num2(double num2)
	{
		if (num2 != 0)
		{
			this->num2 = num2;
			return true;
		}
		else
		{			
			return false;
		}
	}

	void printAllData()
	{
		cout << "num1 + num2 = " << add() << endl;
		cout << "num2 - num1 = " << subtract_1_2() << endl;
		cout << "num1 - num2 = " << subtract_2_1() << endl;
		cout << "num1 * num2 = " << multiply() << endl;
		cout << "num1 / num2 = " << divide_1_2() << endl;
		cout << "num2 / num1 = " << divide_2_1() << endl;
	}
};

void calculate()
{
	double userValue1{};
	double userValue2{};

	Calculator calc(userValue1, userValue2);

	while (true)
	{
		while (true)
		{
			cout << "Enter the num1" << endl;
			cin >> userValue1;

			if (calc.set_num1(userValue1)) { break; }
			else
			{
				cout << "Invalid input!" << endl;
				continue;
			}
		}

		while (true)
		{

			cout << "Enter the num2" << endl;
			cin >> userValue2;

			if (calc.set_num2(userValue2)) { break; }

			else
			{
				cout << "Invalid input!" << endl;
				continue;
			}			
		}
		calc.printAllData();
		cout << endl;
	}
}

