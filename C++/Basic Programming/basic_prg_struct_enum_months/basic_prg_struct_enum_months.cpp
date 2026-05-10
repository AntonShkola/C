#include <iostream>

using namespace std;

enum class Months {none, january, february, march, april, may, june, july, august, september, october, november, december};

int main()
{
    int userNumber;
    int maxMonth{ 12 };
    int minMonth{ 1 };

    while (true)
    {
        cout << "Please, enter the month number" << endl;
        cin >> userNumber;

        if (cin.fail())
        {
            cin.clear(); // Если ввести число больше 10 знаков, то операция проаваливается из-за ограничения int
            cin.ignore(); // Поэтому добавил сброс и очистку буфера
            cout << "Wrong number!" << endl;
        }

        if (userNumber == 0)
        {
            cout << "Goodbye" << endl;
            break;
        }

        if (userNumber >= minMonth && userNumber <= maxMonth)
        {
            switch (static_cast<Months>(userNumber))
            {
            case Months::january:
                cout << "January" << endl;
                break;
            case Months::february:
                cout << "February" << endl;
                break;
            case Months::march:
                cout << "March" << endl;
                break;
            case Months::april:
                cout << "April" << endl;
                break;
            case Months::may:
                cout << "May" << endl;
                break;
            case Months::june:
                cout << "June" << endl;
                break;
            case Months::july:
                cout << "July" << endl;
                break;
            case Months::august:
                cout << "August" << endl;
                break;
            case Months::september:
                cout << "September" << endl;
                break;
            case Months::october:
                cout << "October" << endl;
                break;
            case Months::november:
                cout << "November" << endl;
                break;
            case Months::december:
                cout << "December" << endl;
                break;           
            }
        }  
        else
        {
            cout << "Wrong number!" << endl;
        }
     
    }

}


