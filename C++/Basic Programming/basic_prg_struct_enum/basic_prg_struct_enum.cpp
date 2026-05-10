/*#include <iostream>

using namespace std;

//enum Status{alive, death, ressurection};

enum class Status {alive, death, ressurection};

int main()
{
    Status status{Status::alive};
    
    switch (status)
    {
    case Status::alive:
        cout << "character is alive :)" << endl;
        break;
    case Status::death:
        cout << "character is death :(" << endl;
        break;
    case Status::ressurection:
        cout << "character will be return soon..." << endl;
        break;
    default:
        cout << "error" << endl;
        break;
    }
    
    return 0;
}
*/

#include <iostream>

using namespace std;

struct Coordinates
{
private:
    // члены (атрибуты, пол€) структуры
    int x{};
    int y{};
    int z{};

public:
    // конструктор
    Coordinates(int setX, int setY, int setZ) : x{ setX }, y{ setY }, z{ setZ }
    {

    }

    // метод (функци€-член) структуры
    void printCoordinate() { cout << "x: " << x << "\nY: " << y << "\nZ: " << z << endl; }
};

int main()
{
    Coordinates coordinate{ 100, 200, 300 }; // экземпл€р (объект) структуры
    Coordinates* ptrCoordinate{ &coordinate };

    //(*ptrCoordinate).printCoordinate();
    ptrCoordinate->printCoordinate();

    coordinate.printCoordinate();

    return 0;
}