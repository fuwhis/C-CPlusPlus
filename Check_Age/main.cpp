#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    char key;
    int asciiValue;
    int age;
    do
    {
        cout << "\n===== USE PROGRAM TO CHECK AGE OF STUDENT TO TAKE ADMISSION =====" << endl;

        cout << "Age of student: " << endl;
        cin >> age;

        if(age == 16)
        {
            cout << "Student is " << age << " years old" << endl;
            cout << "Student be accepted to class 10" << endl;
        } else if(age > 25){
            cout << "Student is " << age << " years old" << endl;
            cout << "Your age is over age to take admission to class 10." << endl;
        } else {
            cout << "Student is " << age << " years old" << endl;
            cout << "Student is not enough age to take admission to class 10." << endl;
        }

        cout << "Press ESC to exit or Press Another key to continue." << endl;
        key = getch();
        asciiValue = key;
    }while(asciiValue != 27);

    return 0;
}
