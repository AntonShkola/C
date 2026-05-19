#include <iostream>
#include "basic_prg_classes_objects.h"

// Принципы ООП:
// 1. Абстракция
// 2. Инкапсуляция
// 3. Наследование
// 4. Полиморфизм

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

	void setName(string name)
	{
		this->name = name;
	}

	string getName()
	{
		return name;
	}

	void setAge(int age)
	{
		this->age = age;
	}

	int getAge()
	{
		return age;
	}

	// Метод (функция-член) класса. 
	void printAllData()
	{
		cout << name << endl;
		cout << age << endl;
		cout << getName() << endl;
		cout << getAge() << endl;
	}
};

int lessonFunc()
{
	Person person("Anton", 32); // Экземпляр (объект) класса
	person.printAllData();

	Person person2("Maksim", 45);
	person2.printAllData();
	person2.setName("Nikolay");
	person2.setAge(69);
	person2.printAllData();

	return 0;
}