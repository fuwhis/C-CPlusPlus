#include <iostream>

using namespace std;

int min(int num1, int num2)
{
    int result2;

    if(num1 < num2)
        result2 = num1;
    else
        result2 = num2;
    return result2;
}
int max(int num1, int num2)
{
    int result1;

    if(num1 < num2)
        result1 = num2;
    else
        result1 = num1;

    return result1;
}

int main()
{
    int num1, num2, result1, result2;

    cout << "Input number 1: " ;
    cin >> num1;
    cout << "Input number 2: " ;
    cin >> num2;

    result1 = max(num1,num2);
    result2 = min(num1,num2);

    cout << "The result of max number is: " << result1 << "\n";
    cout << "The result of min number is: " << result2 << endl;
    return 0;
}
