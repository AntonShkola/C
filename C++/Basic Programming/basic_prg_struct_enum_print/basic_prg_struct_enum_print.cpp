#include <iostream>

using namespace std;

struct Address
{
	string city{};
	string street{};
	int houseNumber{};
	int apartNumber{};
	int index{};
};

void addressPrint(const Address& adr)
{
	cout << "City: " << adr.city << endl;
	cout << "Street: " << adr.street << endl;
	cout << "House: " << adr.houseNumber << endl;
	cout << "Apartment: " << adr.apartNumber << endl;
	cout << "Index: " << adr.index << endl;
}

int main()
{
	Address address1{ "Moscow", "Lenina", 5, 23, 443315 };
	Address address2{ "Krasnodar", "Rubina", 10, 45, 834467 };

	addressPrint(address1);
	cout << endl;
	addressPrint(address2);
}

