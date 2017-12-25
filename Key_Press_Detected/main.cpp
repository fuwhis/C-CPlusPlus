#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    char key;
    int asciiValue;
    cout << "Press a key to check its value\n\nAnd Press ESC to exit\n" << endl;

    while(1)
    {
        key = getch();
        asciiValue=key;

        if(asciiValue == 27)
            break;

        cout << "Key pressed -> \" " << key << " \"ascii value = " << asciiValue << endl;
    }
    return 0;
}
