#include <iostream>
#include <conio.h>
using namespace std;

void check_Year(int year)
{
    if(year % 100 == 0)
    {
        if(year % 400 == 0)
        {
            cout << "This is Leap Year!" << endl;
        }
        else
        {
            cout << "This is not Leap Year!" << endl;
        }
    }
    else if(year % 4 == 0)
    {
        cout << year << " is Leap Year!" << endl;
    }
    else
    {
        cout << year << " is not Leap Year!" << endl;
    }
}

int main()
{
    cout << "===== Program Check The Leap Year =====" << endl;
    int year;
    char key;
    int ascii;

    while(1)
    {
        cout << "The year needs to check:\t ";
        cin >> year;
        check_Year(year);
        cout << "\nPress ESC to exit or Press ENTER to continue.\n" << endl;
        key = getch();
        ascii = key;

        if(ascii==27)
            break;
    }
    return 0;
}
