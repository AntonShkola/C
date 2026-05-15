#include <iostream>
#include "basic_prg_classes_objects.h"

using namespace std;

class Person
{
private:
	// члены (атрибуты, поля) класса
	string name{};
	int age{};

public:
	// Конструктор
	Person(string setName, int setAge) : name{ setName }, age{ setAge }
	{ }

	// Метод (функция-член) класса. 
	void printAllData()
	{
		cout << name << endl;
		cout << age << endl;
	}
};

int lessonFunc()
{
	Person person("Anton", 32); // Экземпляр (объект) класса
	person.printAllData();

	return 0;
}